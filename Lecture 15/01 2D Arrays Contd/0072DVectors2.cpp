#include<iostream>
#include<vector>

using namespace std;

void print(vector<vector<int>> v, int m, int n) { // 2d vec is by defaut passed by value
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

}

int main() {

	int m, n;
	cin >> m >> n;

	vector<vector<int>> v(m, vector<int>(n));

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}

	print(v, m, n);

	return 0;
}
