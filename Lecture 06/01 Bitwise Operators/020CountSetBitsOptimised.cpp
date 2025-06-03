#include<iostream>

using namespace std;

int main() {

	int n = 12;
	int cnt = 0; // to track the no. of set bits in 'n'

	// loop runs ceil(log2(n+1)) times

	while (n > 0) {
		int zerothBit = n & 1;
		if (zerothBit == 1) {
			cnt++;
		}
		n = n >> 1;
	}

	cout << cnt << endl;

	return 0;
}