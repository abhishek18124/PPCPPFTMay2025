// constraints : n <= 100

#include<iostream>

using namespace std;

int main() {

	int arr[] = { -3, 2, -1, 4, -5};
	int n = sizeof(arr) / sizeof(int);

	// time : O(n)
	// space: O(n) due to x[]

	int x[100]; // based on constraints

	x[0] = arr[0];
	int maxSofar = x[0];

	for (int i = 1; i <= n - 1; i++) {
		x[i] = max(x[i - 1] + arr[i], arr[i]);
		maxSofar = max(maxSofar, x[i]);
	}

	cout << maxSofar << endl;

	return 0;
}