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

	bool isvalid(vector<string>& board, int n, int r, int j) { // linear time

		// 1. check if there is any previously placed queen in the jth column

		for (int i = r - 1; i >= 0; i--) {
			if (board[i][j] == 'Q') {
				// we've found a previously placed queen in the jth column of the ith row
				// therefore we cannot place Qr in the jth column of row r
				return false;
			}
		}

		// 2. check if there is any previously placed queen in the right diagonal of jth column

		int step = 1;

		for (int i = r - 1; i >= 0 and j + step < n; i--) {
			if (board[i][j + step] == 'Q') {
				// we've found a previously placed queen along the right diagonal of the jth column
				// therefore we cannot place Qr in the jth column of row r
				return false;
			}
			step++;
		}

		// 3. check if there is any previously placed queen in the left diagonal of jth column

		step = 1;

		for (int i = r - 1; i >= 0 and j - step >= 0; i--) {
			if (board[i][j - step] == 'Q') {
				// we've found a previously placed queen along the left diagonal of the jth column
				// therefore we cannot place Qr in the jth column of row r
				return false;
			}
			step++;
		}

		// you can place Qr in the jth column of row r

		return true;

	}

	void f(int r, int n, vector<string>& board, vector<vector<string>>& allBoards) {

		// base case

		if (r == n) {
			allBoards.push_back(board);
			return;
		}

		// recursive case

		// f(r) = take decisions for queens Qr to Qn-1

		// decide for Qr

		for (int j = 0; j < n; j++) { // in each recursive call, we are spending quadratic time

			if (isvalid(board, n, r, j)) {
				board[r][j] = 'Q';
				f(r + 1, n, board, allBoards);
				board[r][j] = '.'; // backtrackingx
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

		f(0, n, board, allBoards);

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