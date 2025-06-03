#include<iostream>

using namespace std;

int main() {

	int n = 20;
	int cnt = 0; // to track the no. of set bits in 'n'

	while (n > 0) {

		// turn off / clear the rightmost set bit of n

		n = n & (n - 1);

		cnt++;

	}

	cout << cnt << endl;

	return 0;
}