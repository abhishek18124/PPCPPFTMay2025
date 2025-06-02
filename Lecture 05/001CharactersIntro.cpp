#include<iostream>

using namespace std;

int main() {

	char ch1 = 'A';

	cout << ch1 << endl;
	cout << (int)ch1 << endl;

	char ch2 = 'b';

	cout << ch2 << endl;
	cout << (int)ch2 << endl;

	int x = 'z';
	cout << x << endl;
	cout << (char)x << endl;

	char ch3 = '3';
	cout << ch3 << endl;
	cout << (int)ch3 << endl;

	char ch4 = '*';
	cout << ch4 << endl;
	cout << (int)ch4 << endl;

	char ch5 = '7';
	int y = ch5 - '0'; // internally ascii values are subtracted
	cout << y << endl;

	return 0;
}