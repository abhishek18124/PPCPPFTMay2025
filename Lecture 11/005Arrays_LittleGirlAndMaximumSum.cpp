/*

https://codeforces.com/problemset/problem/276/C

e.g.

input
3 3
5 3 2
1 2
2 3
1 3

output
25

input
5 3
5 2 4 1 3
1 5
2 3
2 3

output
33

*/

#include<iostream>
#include<vector>
#include<algorithm>
#define int long long

using namespace std;

int32_t main() {

	int n, q;
	cin >> n >> q;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vector<int> diff(n + 1, 0);
	while (q--) { // q.const
		int l, r;
		cin >> l >> r;
		l--; r--; // unlike cf we are using 0-based indexing
		diff[l]++;
		diff[r + 1]--;
	}

	for (int i = 1; i <= n; i++) { // n.const
		diff[i] += diff[i - 1];
	}

	// for (int i = 0; i <= n; i++) {
	// 	cout << diff[i] << " ";
	// }

	// cout << endl;

	sort(a.begin(), a.end()); // nlogn
	sort(diff.begin(), diff.end() - 1); // nlogn

	int ans = 0;

	for (int i = 0; i < n; i++) { // n.const
		ans += a[i] * diff[i];
	}

	cout << ans << endl;

	// total time : 2n + 2nlogn + q ~ n + nlogn + q ~ O(q+nlogn)
	// space : O(n) due to diff[]

	return 0;
}