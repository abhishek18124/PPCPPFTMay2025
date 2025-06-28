/*

Given a m x n maze with some blocked cells (marked with 'X'), and rat that wants to
go from the src (0, 0) to the dst (m-1, n-1) design a recursive algorithm to

	> check if there exists a path from src to dst

such at each step the rat can only move in the right or down direction.

Constraint

 1 <= m, n < 10

Example
	Input :

		maze = {"0000",
	            "00X0",
	            "000X",
	            "0X00"}

	Output :

		true (Yes, a path exist from src to dst)

*/

#include<iostream>

using namespace std;

bool f(char maze[][10], int m, int n, int i, int j) {

	// base case

	if (maze[i][j] == 'X') {
		return false;
	}

	if (i == m - 1 and j == n - 1) {
		return true;
	}

	// recursive case

	// f(i, j) : check if there exists a path from the (i, j)th cell to (m-1, n-1)th cell

	// decide the next step

	if (i == m - 1) {
		// move right and now ask your friend to check if there exists a path
		// from the (i, j+1)th cell to (m-1, n-1)th cell
		return f(maze, m, n, i, j + 1);
	}

	if (j == n - 1) {
		// move down and now ask your friend to check if there exits a path from
		// the (i+1, j)th cell to the (m-1, n-1)th cell
		return f(maze, m, n, i + 1, j);
	}

	// option 1 : move right

	// and now ask your friend to check if there exists a path from
	// (i, j+1)th cell to (m-1, n-1)th cell

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
		"0XX0",
		"000X",
		"0X0X"
	};

	int m = 4;
	int n = 4;

	f(maze, m, n, 0, 0) ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}