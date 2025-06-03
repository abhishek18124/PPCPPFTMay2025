#include<iostream>
#include<cstring> // for memset

using namespace std;

int main() {

	int A[5] = {10, 20, 30, 40, 50}; // 5 * 4B = 20B

	cout << "sizeof(A) = " << sizeof(A) << " B" << endl;

	int n = sizeof(A) / sizeof(int);

	for (int i = 0; i <= n - 1; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;
	cout << A[0] << " ";
	cout << A[1] << " ";
	cout << A[2] << " ";
	cout << A[3] << " ";
	cout << A[4] << endl << endl;


	int B[] = {100, 200, 300};

	cout << "sizeof(B) = " << sizeof(B) << " B" << endl;

	int m = sizeof(B) / sizeof(int);

	for (int i = 0; i < m; i++) {
		cout << B[i] << " ";
	}

	cout << endl;
	cout << B[0] << " ";
	cout << B[1] << " ";
	cout << B[2] << endl << endl;

	int C[5] = {1000, 2000};

	for (int i = 0; i < 5; i++) {
		cout << C[i] << " ";
	}

	cout << endl;

	// int D[5] = {1, 2, 3, 4, 5, 6};

	int E[5] = {0};

	for (int i = 0; i < 5; i++) {
		cout << E[i] << " ";
	}

	cout << endl;

	int F[5] = {};

	for (int i = 0; i < 5; i++) {
		cout << F[i] << " ";
	}

	cout << endl;

	int G[5];

	memset(G, 0, sizeof(G)); // works

	for (int i = 0; i < 5; i++) {
		cout << G[i] << " ";
	}

	cout << endl;

	int H[5];

	memset(H, -1, sizeof(H)); // works

	for (int i = 0; i < 5; i++) {
		cout << H[i] << " ";
	}

	cout << endl;

	int K[5];

	memset(K, 2, sizeof(K)); // donot work

	for (int i = 0; i < 5; i++) {
		cout << K[i] << " ";
	}

	cout << endl;

	return 0;
}