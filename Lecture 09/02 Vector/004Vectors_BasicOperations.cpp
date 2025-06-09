#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	// 1. creating a vector using initialiser list

	vector<int> v = {1, 0, 2, 4, 3};

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	// 2. reversing a vector

	// reverse(v.begin(), v.end());

	reverse(v.begin() + 1, v.begin() + 4); // reverse v[] b/w [1, 4)
	// reverse(v.begin() + 1, v.end() - 1); // reverse v[] b/w [1, 4)

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	// 3. sorting a vector in the increasing order

	sort(v.begin(), v.end()); // time : nlogn // introsort

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	vector<int> v2 = {40, 20, 10, 30, 50};

	sort(v2.begin() + 1, v2.begin() + 4); // sorts v[] in the range [1, 4)

	for (int x : v2) {
		cout << x << " ";
	}

	cout << endl;

	return 0;
}