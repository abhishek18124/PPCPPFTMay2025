#include<iostream>
#include<vector>

using namespace std;

// time : O(n^2)
// space: O(1)

int targetSumPairs(vector<int>& v, int t) {

	int n = v.size();
	int cnt = 0;

	for (int i = 0; i <= n - 2; i++) {
		for (int j = i + 1; j <= n - 1; j++) {
			int pairSum = v[i] + v[j];
			if (pairSum == t) {
				cnt++;
			}
		}
	}

	return cnt;

}

// time : O(n)

int targetSumPairsOptimised(vector<int>& v, int t) {

	int cnt = 0;

	int i = 0;
	int j = v.size() - 1;

	while (i < j) {
		int pairSum = v[i] + v[j];
		if (pairSum == t) {
			cnt++;
			i++;
			j--;
		} else if (pairSum > t) {
			j--;
		} else {
			// pairSum < t
			i++;
		}
	}

	return cnt;

}

int main() {

	vector<int> v = {10, 20, 30, 40, 50, 60};
	int t = 60;

	cout << targetSumPairs(v, t) << endl;

	cout << targetSumPairsOptimised(v, t) << endl;

	return 0;
}