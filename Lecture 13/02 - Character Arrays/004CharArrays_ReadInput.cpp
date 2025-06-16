// n <= 100

#include<iostream>

using namespace std;

int main() {

	char str[101]; // based on constraints

	// cin >> str; // '\0' is added automatically

	// cin.getline(str, 5, '$');

	cin.getline(str, 101); // '\n' is the default delimiting char

	cout << str << endl;

	// cin >> stops reading the input string as soon
	// as it encounters a whitespace character

	// for (int i = 0; str[i] != '\0'; i++) {
	// 	cout << str[i] << endl;
	// }

	return 0;
}