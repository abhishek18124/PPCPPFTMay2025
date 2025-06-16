#include<iostream>
#include<string>

using namespace std;

int main() {

	string s = "abcdefg";

	string substring = s.substr(4, 2);
	cout << substring << endl;

	cout << s.substr(1, 4) << endl;

	// cout << s.substr(2, 100) << endl;

	cout << s.substr(2) << endl; // returns a substring that starts at index 2

	return 0;
}