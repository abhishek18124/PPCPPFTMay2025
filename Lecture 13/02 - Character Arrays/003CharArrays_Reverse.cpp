#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main() {

	char str[] = "hello";
	int n = strlen(str);

	cout << str << endl;

	reverse(str, str + n);

	// strrev(str) present in <cstring> reverses the entire str and works only for char[]

	cout << str << endl;

	return 0;
}