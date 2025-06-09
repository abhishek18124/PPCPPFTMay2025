// constraints : n <= 100

#include<iostream>

using namespace std;

int main() {

	int arr[] = { -3, 2, -1, 4, -5};
	int n = sizeof(arr) / sizeof(int);

	// time : O(n)
	// space: O(1) since aux. space is independent of i/p size


	int x = arr[0]; // x represents x0
	int maxSofar = x;

	for (int i = 1; i <= n - 1; i++) {
		x = max(x + arr[i], arr[i]);
		maxSofar = max(maxSofar, x);
	}

	cout << maxSofar << endl;

	return 0;
}