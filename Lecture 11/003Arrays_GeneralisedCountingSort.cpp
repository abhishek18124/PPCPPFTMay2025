/*

e.g.

input
10
4 3 2 2 4 3 5 4 5 2
2 5

output
2 2 2 3 3 4 4 4 5 5

*/

#include<iostream>
#include<vector>

using namespace std;

int main() {

	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int l, r;
	cin >> l >> r;

	vector<int> freq(r - l + 1, 0);

	for (int x : v) {
		freq[x - l]++;
	}

	// for (int i = 0; i < r - l + 1; i++) {
	// 	cout << freq[i] << endl;
	// }

	// idx i of freq[] stores the frequency of i+l

	for (int i = 0; i < r - l + 1; i++) { // n-steps and each step is const
		// print 'i+l' freq[i] times
		for (int j = 1; j <= freq[i]; j++) {
			cout << i + l << " ";
		}
	}

	cout << endl;

	// time : O(n)
	// space: O(r-l+1) due freq[]

	return 0;
}