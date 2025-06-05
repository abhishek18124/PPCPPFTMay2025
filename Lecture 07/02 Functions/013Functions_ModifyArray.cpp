#include<iostream>

using namespace std;

void modify(int arr[], int n) { // C-style arrays are by default passed by reference
	for (int i = 0; i < n; i++) { // so any changes done to them w/i the fn is reflected in the caller fn here the main fn
		arr[i]++;
	}
}

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	modify(arr, n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}