#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {

		// for the ith row, print i nos. in the inc. order starting with 1

		int num = 1;

		for (int j = 1; j <= i; j++) {

			cout << num << " ";
			num++;

		}

		cout << endl;

	}


	return 0;
}