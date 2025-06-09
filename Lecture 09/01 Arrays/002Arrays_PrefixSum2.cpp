// n <= 100

#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	// time : O(n)

	int psum[101]; // based on constraints

	psum[0] = 0;

	// psum[i] = sum of the prefix that ends at the i-1th index

	// psum[i-1] = sum of the prefix that ends at the i-2th index

	for (int i = 1; i <= n; i++) {
		psum[i] = psum[i - 1] + arr[i - 1];
	}

	for (int i = 0; i <= n; i++) {
		cout << psum[i] << " ";
	}

	cout << endl;

	return 0;
}