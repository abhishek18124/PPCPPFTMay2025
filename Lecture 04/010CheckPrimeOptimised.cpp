#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n;
	cin >> n;

	int i = 2;

	int rootN = sqrt(n);

	while (i <= rootN) {

		if (n % i == 0) {

			cout << "not prime" << endl;
			break;

		}

		i = i + 1;

	}

	if (i > rootN) {
		cout << "prime" << endl;
	}

	return 0;
}