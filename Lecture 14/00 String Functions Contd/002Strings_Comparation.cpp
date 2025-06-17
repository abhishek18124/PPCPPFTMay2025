#include<iostream>
#include<string>

using namespace std;

int main() {

	string s1 = "aaa";
	string s2 = "aaa";

	if (s1 > s2) {
		cout << s1 << " > " << s2 << endl;
	} else if (s1 < s2) {
		cout << s1 << " < " << s2 << endl;
	} else {
		cout << s1 << " is equal to " << s2 << endl;
	}

	return 0;
}