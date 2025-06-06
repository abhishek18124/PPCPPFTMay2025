#include<iostream>

using namespace std;

namespace add {

int f(int a, int b) {
	return a + b;
}

};

namespace mul {

int f(int a, int b) {
	return a * b;
}

};

int f(int a, int b) {
	return a - b;
}


int main() {

	cout << add::f(2, 3) << endl;
	cout << mul::f(2, 3) << endl;
	cout << ::f(2, 3) << endl; // calls f in the global namespace
	cout << f(2, 3) << endl; // call f in the global namespace

	return 0;
}