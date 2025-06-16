// n <= 50 and m <= 50

#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char s1[101] = "abc";
	char s2[] = "def";

	cout << s1 << endl;

	strcat(s1, s2); // this fn concatenates i.e. attaches s2 to the back of s1
	// this will take time prop. of length of s2

	cout << s1 << endl;

	return 0;
}