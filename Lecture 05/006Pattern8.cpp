#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {

		// print n-i+1 characters in inc. order starting with 'A'

		char ch = 'A';

		for (int j = 1; j <= n - i + 1; j++) {
			cout << ch << " ";
			ch++; // when you incr. a char, its ascii value get incr.
		}

		cout << endl;

	}

	return 0;
}