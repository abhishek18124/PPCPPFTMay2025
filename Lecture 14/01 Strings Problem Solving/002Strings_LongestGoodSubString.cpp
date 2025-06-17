#include<iostream>
#include<string>

using namespace std;


bool isGoodString(string& str) { // here we are passing str by ref to avoid copy which is expensive for string type

	for (char ch : str) {
		if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
			// str is not a good string
			return false;
		}
	}

	return true; // str is a good string
}

// time : O(n^3)
// space:

int longestGoodSubstring(string& str) {

	int n = str.size();
	int maxSofar = 0; // INT_MIN

	for (int i = 0; i <= n - 1; i++) {
		for (int j = i; j <= n - 1; j++) {
			// check if the substring that starts at the ith  index
			// and ends at the jth index is a good substring or not
			string substring = str.substr(i, j - i + 1);
			if (isGoodString(substring)) {
				maxSofar = max(maxSofar, j - i + 1);
			}
		}
	}

	return maxSofar;

}

int main() {

	string str = "cbaeicdeiou";

	cout << longestGoodSubstring(str) << endl;

	return 0;
}