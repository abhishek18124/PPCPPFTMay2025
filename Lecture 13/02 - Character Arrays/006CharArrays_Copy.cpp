#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char s1[100] = "abcde";
	char s2[] = "xyz";

	cout << s1 << endl;

	strcpy(s1, s2); // this fn copies s2 into s1
	// this will take time prop. to length of s2

	cout << s1 << endl;

	return 0;
}