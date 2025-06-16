#include<iostream>
#include<string>

using namespace std;

int main() {

	string str;
	cout << str.size() << endl;
	str = "hello";
	cout << str << endl;
	cout << str.size() << endl;

	string str2 = "coding blocks";
	cout << str2 << endl;

	for (int i = 0; str2[i] != '\0'; i++) {
		cout << str2[i] << " ";
	}

	cout << endl;

	return 0;
}