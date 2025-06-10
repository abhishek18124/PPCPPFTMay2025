#include<iostream>
#include<vector>

using namespace std;

int main() {

	vector<int> A = {10, 30, 50, 70, 80};
	int n = A.size();

	vector<int> B = {20, 40, 60};
	int m = B.size();

	vector<int> C(n + m);

	int i = 0; // to iterate over A[]
	int j = 0; // to iterate over B[]
	int k = 0; // to iterate over C[]

	// time : (n+m).const ~ O(n+m)
	// space: O(1) excluding output space C[]

	while (i <= n - 1 and j <= m - 1) {
		if (A[i] < B[j]) {
			C[k] = A[i];
			i++;
			k++;
		} else {
			C[k] = B[j];
			j++;
			k++;
		}
	}

	while (i <= n - 1) {
		C[k] = A[i];
		i++;
		k++;
	}

	while (j <= m - 1) {
		C[k] = B[j];
		j++;
		k++;
	}

	for (int x : C) {
		cout << x << " ";
	}

	cout << endl;

	for (int i = 0; i < n + m; i++) {
		cout << C[i] << " ";
	}

	cout << endl;

	return 0;
}

