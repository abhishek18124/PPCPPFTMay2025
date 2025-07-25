// n <= 8

#include<iostream>

using namespace std;

void f(int n, char out[], int i, int oc, int cc) {

	// base case

	if (i == 2 * n) { // oc == n and cc == n
		out[i] = '\0';
		cout << out << endl;
		return;
	}

	// recursive case

	// f(i, oc, cc) = take decisions for remaining positions
	// i to 2n-1 such that we've used oc no. of opening brackets
	// and cc no. of closing brackets

	// decide for the ith position

	// option 1 : use '('

	if (oc < n) {
		out[i] = '(';
		f(n, out, i + 1, oc + 1, cc);
	}

	// option 2 : use ')'

	if (cc < n) {
		out[i] = ')';
		f(n, out, i + 1, oc, cc + 1);
	}

}

int main() {

	int n = 2;

	char out[20]; // based on constraints, you can use any value >= 17

	f(n, out, 0, 0, 0);

	return 0;
}