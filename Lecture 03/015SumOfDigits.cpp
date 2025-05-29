#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	// no. of iterations = no. of digits in n i.e. num_digit
	// work done in each iteration is const
	// time : num_digit * const

	int sum = 0; // to track the sum of digits of 'n'

	while (n > 0) {
		int d = n % 10;
		sum = sum + d;
		n = n / 10;
	}

	cout << sum << endl;

	return 0;
}