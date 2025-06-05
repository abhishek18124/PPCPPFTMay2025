#include<iostream>

using namespace std;

void mySwap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {

	int x = 10;
	int y = 20;

	cout << x << " " << y << endl; // 10 20

	mySwap(x, y);

	cout << x << " " << y << endl; // 20 10

	return 0;
}
