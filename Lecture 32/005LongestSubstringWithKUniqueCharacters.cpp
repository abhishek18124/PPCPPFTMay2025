#include<iostream>
#include<map>

using namespace std;

int main() {

	string s = "aabacbebebe";
	int n = s.size();
	int k = 3;

	int i = 0; // to store the start of the window
	int j = 0; // to store the end of the windw

	int max_len = 0; // to track the length of the longest substring
	// i.e. window that contain k unique characters

	int uniqCnt = 0; // to keep track of no. of unique characters in the window

	map<char, int> freqMap; // to store a  mapping  between characters
	// present in a window & their frequencies

	// time : O(n) assuming each op in map<> can take log26 which is const
	// space: map<> of size 26 ~ O(1)

	while (j < n) {

		// expand the window
		freqMap[s[j]]++;
		if (freqMap[s[j]] == 1) {
			uniqCnt++;
		}

		// check for the violation of the window property
		if (uniqCnt > k) {
			// window property is violated therefore start shrinking
			while (uniqCnt > k) {
				freqMap[s[i]]--;
				if (freqMap[s[i]] == 0) {
					uniqCnt--;
				}
				i++;
			}
		}

		// check for the validity of the window, and update the answer
		if (uniqCnt == k) {
			// you've found a valid window so track its length
			max_len = max(max_len, j - i + 1);
		}

		// continue expansion of the window

		j++;
	}

	cout << max_len << endl;

	return 0;
}