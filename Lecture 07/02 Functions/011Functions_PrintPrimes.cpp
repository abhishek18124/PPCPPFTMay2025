#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n) {

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			// you've found a factor of n in the range 2 to sqrt(n)
			return false; // n cannot be prime
		}
	}

	// n is prime
	return true;

}

// 3 adv. using fn

// 1. readability
// 2. reusability
// 3. modularity

void printPrimes(int m) {

	for (int n = 2; n <= m; n++) {

		// check if n is prime or not

		if (isPrime(n)) {
			cout << n << " ";
		}

	}

}

int main() {

	int m;
	cin >> m;

	printPrimes(m);

	return 0;
}