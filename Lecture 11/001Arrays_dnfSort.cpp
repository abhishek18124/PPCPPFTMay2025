/*

e.g.

input
9
1 0 1 2 0 1 2 0 1

output
0 0 0 1 1 1 1 2 2

*/

#include<iostream>
#include<vector>

using namespace std;

int main() {

	int n;
	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int low = 0; // points to the slot where the next "zero" goes
	int mid = 0; // points to the 1st element of the unknown region // when you are starting out, the entire arr[] is unknown
	int high = n - 1; // points to the slot where the next "two" goes

	// time : O(n)
	// space: O(1)

	while (mid <= high) {

		if (arr[mid] == 0) {
			swap(arr[mid], arr[low]);
			low++;
			mid++;
		} else if (arr[mid] == 1) {
			mid++;
		} else {
			// arr[mid] == 2
			swap(arr[mid], arr[high]);
			high--;
		}

	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;

}