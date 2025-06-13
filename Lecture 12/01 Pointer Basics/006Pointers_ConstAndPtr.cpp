#include<iostream>

using namespace std;

int main() {

	int x = 20;
	int* ptr1 = &x; // ptr to int
	const int* ptr2 = &x; // ptr to const-int // you can use ptr2 to access x but you cannot use ptr2 to modify x

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;

	// cout << ptr1 << endl;
	// cout << ptr2 << endl;

	(*ptr1)++;

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;

	// ptr1++;
	// ptr2++;

	(*ptr2)++;

	// cout << ptr1 << endl;
	// cout << ptr2 << endl;

	int* const ptr3 = &x; // const ptr to int
	const int* const ptr4 = &x; // const ptr to const-int

	return 0;
}