#include<iostream>

using namespace std;

int main() {

	cout << __builtin_popcount(42) << endl;
	cout << __builtin_popcount(20) << endl;
	cout << __builtin_popcount(15) << endl;
	cout << __builtin_popcountll(12345678900ll) << endl;

	return 0;
}