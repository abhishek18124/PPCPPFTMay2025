#include<iostream>

using namespace std;

int main() {

	int x = 20;

	int* ptr1 = &x; // ptr to int
	const int* ptr2 = &x; // ptr to const-int
	int* const ptr3 = &x; // const ptr to int

	cout << *ptr1 << " " << *ptr2 << " " << *ptr3 << endl;

	(*ptr1)++;

	cout << *ptr1 << " " << *ptr2 << " " << *ptr3 << endl;

	// (*ptr2)++; // error since ptr2 is a pointer to const-int, you can use it to access x but you cannot use it to modify x

	(*ptr3)++;

	cout << *ptr1 << " " << *ptr2 << " " << *ptr3 << endl;

	ptr1++;
	ptr2++;
	// ptr3++; // error since ptr3 is a const-ptr which means it will always point to x

	return 0;
}