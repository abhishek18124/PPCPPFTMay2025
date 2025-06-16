#include<iostream>

using namespace std;

int main() {

	char str1[] = {'a', 'b', 'c', 'd', 'e'};

	cout << str1 << endl; // garbage char may get printed
	// after abcde since we've not terminated str1 with '\0'

	char str2[] = {'a', 'b', 'c', 'd', 'e', '\0'};

	cout << str2 << endl;

	char str3[] = "abcde";
	// when you init a char[] with a string literal
	// '\0' is added automatically

	cout << str3 << endl;

	char str4[6] = "hello";

	cout << str4 << endl;

	char str5[] = "coding";

	for (int i = 0; str5[i] != '\0'; i++) {
		cout << str5[i] << endl;
	}

	return 0;
}