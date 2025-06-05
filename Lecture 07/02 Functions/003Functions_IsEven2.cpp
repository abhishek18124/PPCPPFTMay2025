#include<iostream>

using namespace std;

bool isEven(int n) {
	return n % 2 == 0;
}

int main() {

	bool ans = isEven(2);

	cout << ans << endl;

	cout << isEven(3) << endl;

	// whenever a fn returns a value, you can treat
	// that fn call like an expression

	if (isEven(5)) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}

	isEven(8) ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}