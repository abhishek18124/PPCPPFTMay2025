#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char str[] = "abc.d$ef.g..$h$i";
	char dlim[] = "$.";

	char* ptr = strtok(str, dlim);

	while (ptr != NULL) {
		cout << ptr << endl;
		ptr = strtok(NULL, dlim);
	}

	return 0;
}