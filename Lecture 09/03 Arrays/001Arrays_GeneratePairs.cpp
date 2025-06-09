#include<iostream>
#include<vector>

using namespace std;

void generatePairs(const vector<int>& v) { // here we've passed v by const ref to avoid copy and make sure it isn't modified within the fn

	int n = v.size();

	for (int i = 0; i <= n - 2; i++) {
		for (int j = i + 1; j <= n - 1; j++) {
			cout << v[i] << " " << v[j] << endl;
		}
		cout << endl;
	}

}

int main() {

	vector<int> v = {10, 20, 30, 40, 50};

	generatePairs(v);

	return 0;
}