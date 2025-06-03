#include<iostream>

using namespace std;

int main() {

	int n = 42;
	int k = 4;

	int mask = 1 << k; // 2^k // a no. is which all bits are 0 except kth bit

	cout << (n | mask) << endl;

	return 0;
}