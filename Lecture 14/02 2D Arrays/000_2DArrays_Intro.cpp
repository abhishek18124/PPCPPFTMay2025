#include<iostream>

using namespace std;

int main() {

	int arr[3][4];

	cout << sizeof(arr) << "B" << endl;

	double brr[3][4];

	cout << sizeof(brr) << "B" << endl;

	char crr[10][10];

	cout << sizeof(crr) << "B" << endl;

	return 0;
}