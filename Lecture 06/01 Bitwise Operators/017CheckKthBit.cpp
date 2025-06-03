#include<iostream>

using namespace std;

int main() {

	int n = 42;
	int k = 3;

	if ((n >> k) & 1) {

		// 0th bit of n>>k is set
		// which means kth bit of n is set

		cout << "true" << endl;

	} else {

		// 0th bit of n>>k is not set
		// which means kth bit of n is not set

		cout << "false" << endl;

	}

	if ((n & (1 << k)) == 0) {
		// kth bit of n is not set
		cout << "false" << endl;

	} else {
		// kth bit of n is set
		cout << "true" << endl;
	}

	return 0;
}