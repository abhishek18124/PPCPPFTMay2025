#include<iostream>
#include<string>

using namespace std;

// time : n.const ~ O(n) where n is the length of str
// space: O(1)

bool isGoodString(string& str) { // here we are passing str by ref to avoid copy which is expensive for string type

	for (char ch : str) {

		if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
			// str is not a good string
			return false;
		}

	}

	return true; // str is a good string

}

int main() {

	string str = "uoxea";

	isGoodString(str) ? cout << "good" << endl : cout << "not good" << endl;

	return 0;
}