#include<iostream>

using namespace std;

void generateSubstrings(const string& str) { // here we are passing str by const-ref to avoid copy and to make sure this fn doesn't modify str

	int n = str.size();

	for (int i = 0; i <= n - 1; i++) {
		for (int j = i; j <= n - 1; j++) {
			// generate the substring that starts
			// at the ith index and ends at the
			// jth index

			// for (int k = i; k <= j; k++) {
			// 	cout << str[k];
			// }
			// cout << endl;

			cout << str.substr(i, j - i + 1) << endl;

		}
		cout << endl;
	}

}

int main() {

	string str = "abcde";

	generateSubstrings(str);

	return 0;
}