/*

given a non-negative number n, find the nth fibonacci no.

Example :
	Input : n = 7
	Output : 13

*/

#include<iostream>
#include<vector>

using namespace std;

int cntr1 = 0;

// time : O(2^n)
// space: O(n) due to fn call stack

int f(int n) {

	cntr1++;

	// base case

	if (n == 0 || n == 1) {

		// f(0) : find the 0th fibonacci no.

		// f(1) : find the 1st fibonacci no.

		return n;

	}

	// recursive case

	// f(n) : find the nth fibonacci no.

	return f(n - 1) + f(n - 2);
}

int cntr2 = 0;

int fTopdown(int n, vector<int>& dp) {

	cntr2++;

	// lookup

	if (dp[n] != -1) {
		// you've solved f(n) previously so reuse the result
		return dp[n];
	}

	// base case

	if (n == 0 || n == 1) {

		// f(0) : find the 0th fibonacci no.

		// f(1) : find the 1st fibonacci no.

		return dp[n] = n; // saving is optional since base case anyway takes const time and it
		// corresponds to a subproblem that we don't expand

	}

	// recursive case

	// f(n) : find the nth fibonacci no.

	return dp[n] = fTopdown(n - 1, dp) + fTopdown(n - 2, dp);

}

// time : O(n)
// space: O(n) due to dp[]

int fBottomUp(int n) {

	vector<int> dp(n + 1);

	dp[0] = 0; // at the 0th index of dp[] we store f(0)
	dp[1] = 1; // at the 1st index of dp[] we store f(1)

	for (int i = 2; i <= n; i++) {

		// dp[i] = f(i) = ith fib. no. = f(i-1) + f(i-1)

		dp[i] = dp[i - 1] + dp[i - 2];

	}

	return dp[n]; // at the nth index of dp[] we store f(n)

}

// time : O(n)
// space: O(1)

int fBottomUpSpaceOptimised(int n) {

	if (n == 0 || n == 1) {
		return n;
	}

	int a = 0; // 0th fib. no.
	int b = 1; // 1st fib. no.

	for (int i = 2; i <= n ; i++) {
		int c = a + b;
		a = b;
		b = c;
	}

	return b;

}

int main() {

	int n = 20;

	cout << f(n) << endl;

	vector<int> dp(n + 1, -1);

	cout << fTopdown(n, dp) << endl;

	cout << "cntr1 = " << cntr1 << endl;
	cout << "cntr2 = " << cntr2 << endl;

	cout << fBottomUp(n) << endl;

	cout << fBottomUpSpaceOptimised(n) << endl;

	return 0;
}