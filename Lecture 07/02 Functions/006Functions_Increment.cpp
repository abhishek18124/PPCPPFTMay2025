#include<iostream>

using namespace std;

void incr(int a) {
	a++;
	cout << a << endl; // 11
}

int main() {

	int a = 10;

	incr(a); // a is passed by value

	cout << a << endl; // 10

	return 0;
}