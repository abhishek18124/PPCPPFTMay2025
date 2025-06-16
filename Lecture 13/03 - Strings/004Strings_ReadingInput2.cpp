#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main() {

	string str;

	// getline(cin, str); // '\n' is the default delimiting char

	// by default we stop reading as soon as we encounter
	// '\n', we can pass our own delimiting char as third
	// argument

	getline(cin >> ws, str); // '\n' is the default delimiting char

	// cin >> ws is an input manipulator that helps
	// ignore leading whitespaces

	cout << str << endl;

	return 0;
}