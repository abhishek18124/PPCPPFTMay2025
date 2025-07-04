/*

Given a m x n maze with some blocked cells (marked with 'X'), and rat that wants to
go from the src (0, 0) to the dst (m-1, n-1) design a recursive algorithm to

	> count the number of paths that exist between src and dst

such at each step the rat can only move in the right or down direction.

Constraint

 1 <= m, n < 10

Example
	Input :

		maze = {"0000",
	            "00X0",
	            "000X",
	            "0X00"}

	Output : 3

*/

#include<iostream>

using namespace std;

int cnt = 0; // to track no. of valid paths from 0,0 to m-1,n-1

bool f(char maze[][10], int m, int n, int i, int j) {

	// base case

	if (i == m || j == n) {
		return false;
	}

	if (maze[i][j] == 'X') {
		return false;
	}

	if (i == m - 1 and j == n - 1) {
		cnt++;
		return true;
	}

	// recursive case

	// f(i, j) : check if there exists a path from the (i, j)th cell to (m-1, n-1)th cell

	// decide the next step

	bool X = f(maze, m, n, i, j + 1);

	// option 2 : move down

	// and now ask your friend to check if there exists a path from
	// (i+1, j)th cell to (m-1, n-1)th cell

	bool Y = f(maze, m, n, i + 1, j);

	return X or Y;

}


int main() {

	char maze[][10] = {
		"0000",
		"00X0",
		"000X",
		"0X00"
	};

	int m = 4;
	int n = 4;

	f(maze, m, n, 0, 0) ? cout << "true" << endl : cout << "false" << endl;

	cout << cnt << endl;

	return 0;
}