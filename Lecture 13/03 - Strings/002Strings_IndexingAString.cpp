#include<iostream>
#include<string>

using namespace std;

int main() {

	string str = "coding";

	cout << str[0] << endl;
	cout << str.front() << endl;

	int n = str.size();
	cout << str[n - 1] << endl;
	cout << str.back() << endl;

	cout << str[1] << endl;
	cout << str[2] << endl;

	str = "blocks";

	cout << str << endl;

	return 0;
}