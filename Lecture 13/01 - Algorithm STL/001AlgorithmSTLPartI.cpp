#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {

	int arr[] = {50, 40, 20, 10, 30};
	int n = sizeof(arr) / sizeof(int);

	// 1. sorting a sequence using built-in sort() in O(nlogn) // introsort used

	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	vector<int> v = {50, 40, 20, 10, 30};

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	// 2. reversing a sequence using the built-in reverse()

	reverse(arr, arr + n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	reverse(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	// 3. reversing a sequence in-range using the built-in reverse()

	reverse(arr + 1, arr + 4);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	reverse(v.begin() + 1, v.begin() + 4);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	return 0;
}
