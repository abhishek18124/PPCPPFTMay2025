#include<iostream>

using namespace std;

void incr(int& ref) {
	ref++;
}

int main() {

	int a = 10;

	incr(a); // a is passed by reference

	cout << a << endl; // 10

	return 0;
}


// pass by value

// changes done to the parameter won't be reflected in arg. w/i the caller fn


// pass by reference

// changes done to the parameter will be reflected in arg. w/i the caller fn	s