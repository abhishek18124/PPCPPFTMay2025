#include<iostream>

using namespace std;

int main() {

	int cnt = 0; // to track the no. of characters

	char ch;

	while (true) {

		// cin >> ch;

		// cin >> ignores whitespace characters

		ch = cin.get();

		// use cin.get() to read whitespaces i.e. single space ' ', tab '\t', newline '\n'

		if (ch == '$') {
			break;
		}

		cnt++;

	}

	cout << "cnt = " << cnt << endl;

	return 0;
}