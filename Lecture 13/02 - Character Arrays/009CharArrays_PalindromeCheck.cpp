#include<iostream>

using namespace std;

// steps = n/2
// time : n/2.const ~ O(n)
// space: O(1)

bool isPalindrome(char str[]) {

	int i = 0;
	int j = strlen(str) - 1;

	while (i < j) {

		if (str[i] != str[j]) {
			// str[] is not a palindrome
			return false;
		}

		i++;
		j--;

	}

	// str[] is a palindrome
	return true;

}

int main() {

	char str[] = "racecar";

	isPalindrome(str) ? cout << "palindrome" << endl :
	                         cout << "not a palindrome" << endl;

	return 0;
}