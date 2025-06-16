#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {

	int arr[] = {10, 10, 20, 30, 30, 30, 40, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	// arr[] should sorted to use the following functions

	int key = 100;

	// 1. searching for a key in a sorted sequence in O(logn) using binary_search()

	binary_search(arr, arr + n, key) ? cout << key << " found" << endl :
	                                        cout << key << " is not found" << endl;

	vector<int> v = {10, 20, 30, 40, 50};

	binary_search(v.begin(), v.end(), key) ? cout << key << " found" << endl :
	        cout << key << " is not found" << endl;

	// 2. finding lower bound for a key in a sorted sequence in O(logn) using lower_bound()

	// lower_bound returns iterator to the 1st element not less than i.e. greater than equal to key

	key = 30;

	cout << lower_bound(arr, arr + n, key) - arr << endl;

	key = 40;

	cout << lower_bound(arr, arr + n, key) - arr << endl;

	// 3. finding upper bound for a key in a sorted sequence in O(logn) using upper_bound()

	// upper_bound returns iterator to the 1st element greater than key

	key = 30;

	cout << upper_bound(arr, arr + n, key)  - arr << endl;

	key = 40;

	cout << upper_bound(arr, arr + n, key) - arr << endl;

	// 4. counting the occurences of a key in a sorted sequence in O(logn)

	key = 10;

	cout << upper_bound(arr, arr + n, key) - lower_bound(arr, arr + n, key) << endl;

	return 0;
}