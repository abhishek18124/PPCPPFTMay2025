/*

	https://cplusplus.com/reference/set/set/?kw=set
	https://cplusplus.com/reference/set/multiset/?kw=multiset

	> insert/erase/find is logarithmic i.e. O(logn)
	> values are inserted in the sorted order
	> set contains only distinct values
	> multiset allows duplicate values

*/

#include<iostream>
#include<set>

using namespace std;

int main() {

	set<int> s;
	// set<int, greater<int>> s;

	cout << "size : " << s.size() << endl; // 0

	s.insert(5);
	s.insert(4);
	s.insert(3);
	s.insert(2);
	s.insert(1);
	s.insert(1); // ignored since 1 is already present

	cout << "size : " << s.size() << endl; // 5

	for (int x : s) {
		cout << x << " ";
	}

	cout << endl;

	s.erase(5); // if key being erased is present in the set<> then it will be deleted from the set<>
	// otherwise nothing will happen

	cout << "size : " << s.size() << endl; // 4

	for (int x : s) {
		cout << x << " ";
	}

	cout << endl;

	s.erase(s.begin());

	cout << "size : " << s.size() << endl; // 3

	for (int x : s) {
		cout << x << " ";
	}

	cout << endl;

	auto it = s.begin();

	it++;

	s.erase(it);

	cout << "size : " << s.size() << endl;

	for (int x : s) {
		cout << x << " ";
	}

	cout << endl;

	for (auto it = s.begin(), end = s.end(); it != end; it++) {
		cout << *it << " ";
	}

	cout << endl;

	if (s.find(3) != s.end()) {
		cout << "3 is present" << endl;
	} else {
		cout << "3 is absent" << endl;
	}

	if (s.find(4) != s.end()) {
		cout << "4 is present" << endl;
	} else {
		cout << "4 is absent" << endl;
	}

	if (s.count(5)) {
		cout << "5 is present" << endl;
	} else {
		cout << "5 is absent" << endl;
	}

	if (s.count(4)) {
		cout << "4 is present" << endl;
	} else {
		cout << "4 is absent" << endl;
	}

	s.empty() ? cout << "set<> is empty" << endl : cout << "set<> is not empty" << endl;

	s.clear();

	cout << "size : " << s.size() << endl;

	s.empty() ? cout << "set<> is empty" << endl : cout << "set<> is not empty" << endl;

	return 0;
}