#include<iostream>
#include<string>

using namespace std;

int main() {

	string s1 = "abc";
	string s2 = "def";

	s1.append(s2);

	cout << s1 << endl;
	cout << s2 << endl;

	string s3 = "xyz";
	string s4 = "jkl";

	s3 = s3 + s4;

	cout << s3 << endl;
	cout << s4 << endl;

	string str = "codin";
	str.push_back('g');
	cout << str << endl;

	str.pop_back();
	cout << str << endl;

	return 0;
}