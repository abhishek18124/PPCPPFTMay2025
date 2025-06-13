#include<iostream>

using namespace std;

int main() {

	int x = 10;
	char* ptr1 = (char*)&x;
	// cout << ptr1 << endl; // addr won't be printed since acc. to compiler ptr1 is a char* holding addr of a char

	char ch = 'A';
	int* ptr2 = (int*)&ch;
	cout << ptr2 << endl; // addr will be printed since acc. to compiler ptr2 is a int* and hold addr of int

	return 0;
}