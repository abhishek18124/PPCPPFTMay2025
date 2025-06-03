#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	if ((n & 1) == 1) {
		// 0th bit of n is set
		cout << n << " is odd" << endl;
	} else {
		// 0th bit of n is not set
		cout << n << " is even" << endl;
	}

	if (n & 1) {
		// 0th bit of n is set
		cout << n << " is odd" << endl;
	} else {
		// 0th bit of n is not set
		cout << n << " is even" << endl;
	}

	n & 1 ? cout <<  n << " is odd" << endl : cout << n << " is even" << endl;

	return 0;
}