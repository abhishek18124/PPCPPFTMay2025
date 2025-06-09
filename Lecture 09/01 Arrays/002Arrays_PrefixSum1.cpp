// n <= 100

#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	// time : O(n)

	int psum[100]; // based on constraints

	psum[0] = arr[0]; // psum[0] stores the sum of prefix that ends at the 0th index

	for (int i = 1; i <= n - 1; i++) {
		psum[i] = psum[i - 1] + arr[i];
	}

	for (int i = 0; i <= n - 1; i++) {
		cout << psum[i] << " ";
	}

	cout << endl;

	return 0;
}