#include<iostream>
#include<string>

using namespace std;

int main() {

	string str = "ababbaab";

	int rudeness = 0;

	int n = str.size();

	// time : O(n^2)
	// space : O(1)

	for (int i = 0; i < n - 1; i++) {

		if (str[i] == 'a') {

			// find out no. of b's in the range [i+1...n-1]
			int cnt = 0;

			for (int j = i + 1; j < n; j++) {
				if (str[j] == 'b') {
					cnt++;
				}
			}

			rudeness += cnt;

		}


	}

	cout << rudeness << endl;

	return 0;
}