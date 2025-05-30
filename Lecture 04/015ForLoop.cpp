#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	// for (int i = 0; i < n; i++) {
	// 	cout << i << " ";
	// }

	// cout << endl;

	// for (int i = 1, j = n; i < j; i++, j--) { // we can init mul. var w/i a for loop as long as their types are same
	// 	cout << i << " " << j << endl;
	// }

	// cout << endl;

	int i = 0;

	for (i = 0; i < n; i++) {
		cout << i << " ";
	}

	cout << endl << "outside loop i = " << i << endl;

	return 0;
}