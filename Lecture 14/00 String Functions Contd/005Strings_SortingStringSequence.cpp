#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

// return true if you want a to be ordered before b
// otherwise you return false

bool cmp(string a, string b) {
	if (a.size() < b.size()) {
		// we want a to be ordered before b since we are
		// sorting length wise in the inc. order
		return true;
	}
	return false;

	// return a.size() < b.size();

}

int main() {

	vector<string> v;

	v.push_back("hiya");
	v.push_back("chaitanya");
	v.push_back("bhavy");
	v.push_back("priyanka");

	// sort(v.begin(), v.end());
	// sort(v.rbegin(), v.rend());
	// sort(v.begin(), v.end(), greater<string>());
	sort(v.begin(), v.end(), cmp);

	for (string name : v) {
		cout << name << endl;
	}

	return 0;
}