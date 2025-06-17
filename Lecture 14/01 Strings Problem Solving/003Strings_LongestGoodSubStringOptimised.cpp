#include<iostream>
#include<string>

using namespace std;

int main() {

	string str = "cbaeicdeiou";

	int maxSofar = 0; // to track the length of the longest good substring
	int cnt = 0; // to track count of consecutive vowels

	// time : O(n)
	// space: O(1)

	// [HW] try to build and print the longest good substring along with its length

	for (char ch : str) {

		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
			cnt++;
			maxSofar = max(maxSofar, cnt);
		} else {
			cnt = 0;
		}

	}

	cout << maxSofar << endl;

	return 0;
}