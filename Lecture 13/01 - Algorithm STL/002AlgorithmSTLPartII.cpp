#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// return true if you want a to be ordered before b otherwise return false

bool cmp(int a, int b) {
	if (a > b) {
		// since we are sorting in dec. order and a is more than b
		// we want a to be ordered before b in the sorted seq
		return true;
	}
	return false;
}

// bool cmp(int a, int b) {
// 	return a > b;
// }


int main() {

	int arr[] = {50, 20, 10, 30, 40};
	int n = sizeof(arr) / sizeof(int);

	vector<int> v = {50, 20, 10, 30, 40};

	// sorting a sequence in the decreasing order

	// 1. using greater<T>() function object / functor

	sort(arr, arr + n, greater<int>());

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	sort(v.begin(), v.end(), greater<int>());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	// 2. using a customer comparator

	int brr[] = {200, 100, 400, 500, 300};
	int m = sizeof(brr) / sizeof(int);

	sort(brr, brr + m, cmp);

	for (int i = 0; i < m; i++) {
		cout << brr[i] << " ";
	}

	cout << endl;

	return 0;
}
