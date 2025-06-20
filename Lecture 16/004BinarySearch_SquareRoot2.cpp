#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	int p;
	cin >> p;

	double ans;

	int s = 0;
	int e = n;

	// search space size = e - s = n - 0 = n

	while (s <= e) { // logn.const
		int m = s + (e - s) / 2;
		// is 'm' square root of 'n'
		if (m * m <= n) {
			ans = m;
			s = m + 1;
		} else {
			e = m - 1;
		}
	}

	double inc = 0.1;

	for (int i = 1; i <= p; i++) { // p.10.const
		while (ans * ans <= n) {
			ans = ans + inc;
		}
		ans = ans - inc;
		inc = inc / 10;
	}


	cout << ans << endl;

	// time : logn + 10p ~ O(logn) assuming p <<<< n

	return 0;
}