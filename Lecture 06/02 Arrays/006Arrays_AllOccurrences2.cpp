// n <= 100

#include<iostream>

using namespace std;

int main() {

	int arr[100]; // based on constraints

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int t;
	cin >> t;

	int i;

	bool flag = false; // assume t is not present in arr[]

	for (i = 0; i < n; i++) {

		if (arr[i] == t) {

			// you've found the 1st occ of the 't' at the ith index

			cout << i << endl;
			flag = true;

		}

	}

	if (flag == false) {
		cout << -1 << endl;
	}

	if (!flag) {
		cout << -1 << endl;
	}

	return 0;
}