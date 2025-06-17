#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {

	string s = "baaacaab";

	sort(s.begin(), s.end());

	cout << s << endl;

	// sort(s.begin(), s.end(), greater<char>());
	sort(s.rbegin(), s.rend());

	cout << s << endl;

	return 0;
}