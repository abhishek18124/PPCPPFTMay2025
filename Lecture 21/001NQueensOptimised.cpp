/*

https://leetcode.com/problems/n-queens/

N Queens Problem

The problem is to place 'n' queens on an 'n x n' chessboard, so that no two queens are attacking
each other, this means that no two queens are in the same row, the same column, or the same diagonal.

Example
	Input : N = 4
	Output:
			_ Q _ _	     _ _ Q _
	        _ _ _ Q      Q _ _ _
	        Q _ _ _      _ _ _ Q
	        _ _ Q _      _ Q _ _

	        [1, 3, 0, 2] [2, 0, 3, 1]

Constraint:
	1<=n<=10

*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:

	void f(int r, int n, vector<string>& board, vector<vector<string>>& allBoards,
	       vector<bool>& columnStatus, vector<bool>& rightDiagStatus,
	       vector<bool>& leftDiagStatus) {

		// base case

		if (r == n) {
			allBoards.push_back(board);
			return;
		}

		// recursive case

		// f(r) = take decisions for queens Qr to Qn-1

		// decide for Qr

		for (int j = 0; j < n; j++) { // in each recursive call, we are spending quadratic time

			if (columnStatus[j] == false and rightDiagStatus[r + j] == false and leftDiagStatus[(r - j) + (n - 1)] == false) {
				board[r][j] = 'Q';
				columnStatus[j] = true;
				rightDiagStatus[r + j] = true;
				leftDiagStatus[(r - j) + (n - 1)] = true;
				f(r + 1, n, board, allBoards, columnStatus, rightDiagStatus, leftDiagStatus);
				board[r][j] = '.'; // backtracking
				columnStatus[j] = false; // backtracking
				rightDiagStatus[r + j] = false; // backtracking
				leftDiagStatus[(r - j) + (n - 1)] = false; // backtracking
			}

		}

	}

	vector<vector<string>> solveNQueens(int n) {

		vector<string> board; // a board is a sequence of rows
		for (int i = 1; i <= n; i++) {
			string row(n, '.'); // each row is a string of size n that contains . initially
			board.push_back(row);
		}

		vector<vector<string>> allBoards; // to track all valid boards
		vector<bool> columnStatus(n, false);
		vector<bool> rightDiagStatus(2 * n - 1, false);
		vector<bool> leftDiagStatus(2 * n - 1, false);

		// columnStatus[0] stores info. if column 0 is occupied by a queen or not
		// columnStatus[1] stores info. if column 1 is occupied by a queen or not
		// columnStatus[2] stores info. if column 2 is occupied by a queen or not
		// ...
		// columnStatus[n-1] stores info. if column n-1 is occupied by a queen or not

		f(0, n, board, allBoards, columnStatus, rightDiagStatus, leftDiagStatus);

		return allBoards;

	}
};

int main() {

	int n;
	cin >> n;

	Solution s;
	vector<vector<string>> allBoards = s.solveNQueens(n);
	for (vector<string> board : allBoards) {
		for (string row : board) {
			cout << row << endl;
		}
		cout << endl;
	}

	return 0;
}