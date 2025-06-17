#include<iostream>
#include<string>

using namespace std;

// time : O(n^2)
// space: O(1)

int countPalindromicSubstringsOptimised(string s) {

	int n = s.size();

	int cnt = 0; // to track the no. of palindromic substrings in the given string

	// 1. find out no. of odd-length palindromic substrings in s[]

	for (int i = 0; i < n; i++) {

		// find out no. of odd-len palindromic substrings with s[i] as the center of the palindrome

		int j = 0;

		while (i - j >= 0 and i + j <= n - 1 and s[i - j] == s[i + j]) {
			cnt++;
			j++;
		}

	}

	// 2. find out no. of even-length palindromic substrings in s[]

	for (double i = 0.5; i < n; i++) {

		double j = 0.5;

		while (i - j >= 0 and i + j <= n - 1 and s[(int)(i - j)] == s[(int)(i + j)]) {
			cnt++;
			j++;
		}

	}

	return cnt;

}

int main() {

	string s = "abaaba";

	cout << countPalindromicSubstringsOptimised(s) << endl;

	return 0;
}