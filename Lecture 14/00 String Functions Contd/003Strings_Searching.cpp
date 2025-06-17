#include<iostream>
#include<string>

using namespace std;

int main() {

	string s = "abcabcadef";
	string t = "ca";

	cout << s.find(t) << endl;
	cout << s.rfind(t) << endl;

	string u = "xyz";

	cout << s.find(u) << endl;

	cout << string::npos << endl;

	cout << (string::npos == -1) << endl;

	return 0;
}