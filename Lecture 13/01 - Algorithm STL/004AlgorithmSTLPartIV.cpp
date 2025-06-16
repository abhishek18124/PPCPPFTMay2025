#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int arr[] = {50, 40, 40, 30, 30, 30, 20, 10, 10};
	int n = sizeof(arr) / sizeof(int);

	int key = 30;

	// 1. searching for a key in a sequence using find()

	cout << find(arr, arr + n, key) - arr << endl;

	key = 100;

	if (find(arr, arr + n, key) == arr + n) {
		cout << key << " is not present" << endl;
	}

	key = 20;
	auto it = find(arr, arr + n, key);

	if (it != arr + n) {
		cout << key << " is present at index " << it - arr << endl;
	}

	// 2. counting the occurrences of a key in a sequence using count()

	key = 30;

	cout << count(arr, arr + n, key) << endl;

	key = 100;

	cout << count(arr, arr + n, key) << endl;

	return 0;
}
