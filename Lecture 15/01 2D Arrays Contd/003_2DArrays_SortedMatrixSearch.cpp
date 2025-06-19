#include<iostream>
#include<algorithm>

using namespace std;

// time : O(mlogn)
// space: O(1)

bool isPresent(int mat[][3], int m, int n, int t) {

	for (int i = 0; i < m; i++) {

		// apply binary search in the ith row to search for t in the ith row

		if (binary_search(mat[i], mat[i] + n, t)) {
			// you've found the t in the ith row
			return true;
		}

	}

	return false; // t is not present

}

int main() {

	int mat[][3] = {
		{40, 50, 60},
		{10, 20, 30},
		{70, 80, 90}
	};

	int m = 3;
	int n = 3;

	int t = 100;

	isPresent(mat, m, n, t) ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}