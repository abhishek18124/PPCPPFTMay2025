#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	double ans;

	double s = 0;
	double e = n;

	double err = 1e-7; // 10^-7

	while (e - s > err) {

		double m = s + (e - s) / 2;

		// is 'm' square root of 'n'

		if (m * m <= n) {
			ans = m;
			s = m + err;
		} else {
			e = m - err;
		}

	}

	cout << ans << endl;

	return 0;
}
