#include<iostream>
#include<vector>

using namespace std;

int main() {

	int n;
	cin >> n;

	vector<int> v(n); // by default v[] is init with 0
	// vector<int> v(n, 0); // by default v[] is init with 0

	// cout << v.capacity() << endl;
	// cout << v.size() << endl;

	// for (int x : v) {
	// 	cout << x << " ";
	// }

	// cout << endl;

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	return 0;
}