#include<iostream>

using namespace std;

void greet(); // function declaration

int multiply(int a, int b); // function declaration // specifying parameter names during fn declaration is optional

int main() {

	greet();

	cout << multiply(2, 3) << endl;

	return 0;
}

void greet() {
	cout << "hello" << endl;
	return;
}

int multiply(int a, int b) {
	return a * b;
}