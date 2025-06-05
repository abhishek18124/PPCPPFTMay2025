#include<iostream>

using namespace std;


int main() {

	int x = 20;
	int& y = x; // y is referring to x i.e. y is a new name for x
	y++;
	cout << x << endl;
	cout << y << endl;

	return 0;
}