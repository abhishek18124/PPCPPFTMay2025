/*

e.g.

input
5 3
4 1 5 2 3
0 2 5
2 3 2
3 4 7

output
9 6 12 11 10

*/

#include<iostream>
#include<vector>

using namespace std;

int main() {

	int n, q;
	cin >> n >> q;

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	vector<int> diff(n + 1, 0);
	while (q--) { // this loop runs q times therefore q steps
		int l, r, x;
		cin >> l >> r >> x;
		diff[l] += x;
		diff[r + 1] -= x;
	}

	for (int i = 1; i <= n; i++) { // this loop runs n times therefore n steps
		diff[i] += diff[i - 1];
	}

	// diff[i] stores the difference or change
	// we'll make to the ith index of i/p vec.

	// for (int i = 0; i <= n; i++) {
	// 	cout << diff[i] << " ";
	// }

	// cout << endl;

	for (int i = 0; i < n; i++) { // this loop runs n times therefore n steps
		v[i] += diff[i];
	}

	// total steps = q + n + n and each step is const
	// time  : (2n+q).const ~ O(n+q)
	// space : n+1 due diff[] ~ O(n)

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	return 0;
}