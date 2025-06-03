#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n = 42;
	int cnt = 0; // to track the no. of set bits in 'n'

	// loop runs 32 times

	for (int k = 0; k <= 31; k++) {

		// check if the kth bit of n is set or not

		if ((n >> k) & 1) {
			// kth bit of n is set
			cnt++;
		}

	}

	cout << cnt << endl;

	return 0;
}