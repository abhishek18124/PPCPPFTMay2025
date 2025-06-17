#include<iostream>
#include<string>

using namespace std;

bool isPalindrome(string& s) {
	int i = 0;
	int j = s.size() - 1;
	while (i < j) {
		if (s[i] != s[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

// time : O(n^3)
// space: O(n) due substring

int countPalindromicSubstrings(string& s) {

	int cnt = 0; // to track the no. of palindromic substrings in the given string

	int n = s.size();

	for (int i = 0; i <= n - 1; i++) {
		for (int j = i; j <= n - 1; j++) {
			// check if the substring that starts at the ith index and
			// ends at the jth index is a palindrome or not
			string substring = s.substr(i, j - i + 1);
			if (isPalindrome(substring)) {
				cnt++;
			}
		}
	}

	return cnt;

}

int main() {

	string s = "abaaba";

	cout << countPalindromicSubstrings(s) << endl;

	return 0;
}