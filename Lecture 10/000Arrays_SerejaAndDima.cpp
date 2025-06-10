#include<iostream>
#include<vector>

using namespace std;

int main() {

	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int serejaScore = 0;
	int dimaScore = 0;

	int i = 0; // points to the leftmost card
	int j = n - 1; // points to the rightmost card

	bool serejaTurn = true; // if serejaTurn is true then it is sereja's turn otherwise it is dima's turn

	while (i <= j) {

		if (serejaTurn) {

			// sereja's turn

			if (v[i] > v[j]) {

				serejaScore += v[i];
				i++;

			} else {

				serejaScore += v[j];
				j--;

			}

			serejaTurn = false;

		} else {

			// dima's turn

			if (v[i] > v[j]) {

				dimaScore += v[i];
				i++;

			} else {

				dimaScore += v[j];
				j--;

			}

			serejaTurn = true;

		}

	}

	cout << serejaScore << " " << dimaScore << endl;

	return 0;
}