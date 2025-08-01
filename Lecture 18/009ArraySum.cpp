#include<iostream>

using namespace std;

int f(int X[], int n, int i) {

	// base case

	if (i == n - 1) {
		// f(n-1) = find the sum of X[n-1...n-1] i.e. find the sum of {X[n-1]}
		return X[n - 1];
	}

	// recursive case

	// f(i) = find the sum of X[i...n-1]

	// 1. ask your friend to find the sum of X[i+1...n-1]

	int A = f(X, n, i + 1);

	return X[i] + A;

}

int main() {

	int X[] = {10, 20, 30, 40, 50};
	int n = sizeof(X) / sizeof(int);

	cout << f(X, n, 0) << endl;

	return 0;
}