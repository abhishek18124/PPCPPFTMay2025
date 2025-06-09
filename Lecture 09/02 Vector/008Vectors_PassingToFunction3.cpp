#include<iostream>
#include<vector>

using namespace std;

void f(const vector<int>& v) { // use const-ref to avoid copy and to make sure v[] isn't modified within the fn

	for (int i = 0; i < v.size(); i++) {
		// v[i]++;
	}

}

int main() {

	vector<int> v = {0, 1, 2, 3, 4};

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	f(v);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;


	return 0;
}