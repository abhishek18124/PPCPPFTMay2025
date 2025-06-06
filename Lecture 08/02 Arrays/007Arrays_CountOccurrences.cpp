#include<iostream>

using namespace std;

int lowerBound(int arr[], int n, int t) {

	int s = 0;
	int e = n - 1;

	int ans = -1; // to track the index of the 1st occ. of 't' in arr[]

	while (s <= e) {

		int m = s + (e - s) / 2;
		if (arr[m] == t) {
			// save m and go towards the left of midpoint as there may
			// be more occurrence of t
			ans = m;
			e = m - 1;
		} else if (t > arr[m]) {
			// go towards the right of midpoint to search t
			// i.e. reduce the search space from [s, e] to [m+1, e]
			s = m + 1;
		} else {
			// t < arr[m]
			// go towards the left of midpoint to search t
			// i.e. reduce the search space from [s, e] to [s, m-1]
			e = m - 1;
		}

	}

	return ans;

}

int upperBound(int arr[], int n, int t) {

	int s = 0;
	int e = n - 1;

	int ans = -1; // to track the index of the last occ. of 't' in arr[]

	while (s <= e) {

		int m = s + (e - s) / 2;
		if (arr[m] == t) {
			// save m and go towards the right of midpoint as there may
			// be more occurrence of t
			ans = m;
			s = m + 1;
		} else if (t > arr[m]) {
			// go towards the right of midpoint to search t
			// i.e. reduce the search space from [s, e] to [m+1, e]
			s = m + 1;
		} else {
			// t < arr[m]
			// go towards the left of midpoint to search t
			// i.e. reduce the search space from [s, e] to [s, m-1]
			e = m - 1;
		}

	}

	return ans;

}

int main() {

	int arr[] = {10, 10, 20, 20, 20, 20, 20, 30, 30, 30, 40};
	int n = sizeof(arr) / sizeof(int);

	int t = 100;

	int i = lowerBound(arr, n, t); // logn
	if (i == -1) {
		// t is not present
		cout << 0 << endl;
	} else {
		int j = upperBound(arr, n, t); // logn
		cout << j - i + 1 << endl;
	}

	// total time = 2logn.const ~ O(logn)

	return 0;
}