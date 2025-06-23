/*
		https://cplusplus.com/reference/utility/pair/?kw=pair

		This 'pair' class couples together a pair of values, which maybe of different
		types (T1 and T2).The individual values of a pair can be accessed through its
		public members first and second.
*/

#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	pair<int, int> p1;

	p1.first = 100;
	p1.second = 200;

	cout << p1.first << " " << p1.second << endl;

	pair<string, int> p2;

	p2.first = "coding";
	p2.second = 6;

	cout << p2.first << " " << p2.second << endl;

	pair<char, int> p3;

	p3.first = 'A';
	p3.second = 10;

	cout << p3.first << " " << p3.second << endl;

	pair<string, string> p4 = make_pair("india", "bharat");
	cout << p4.first << " " << p4.second << endl;

	vector<pair<int, int>> v;

	v.push_back({4, 2}); // v.push_back(make_pair(1, 2));
	v.push_back({1, 4});
	v.push_back({1, 3});
	v.push_back({2, 5});

	for (pair<int, int> p : v) {
		cout << p.first << " " << p.second << endl;
	}

	cout << endl;

	// by default vector<> of pair<> is sorted on first member of the pair<>

	// sort(v.begin(), v.end()); // in case there is a tie on first member then comparision is done on second member

	sort(v.begin(), v.end(), greater<pair<int, int>>()); // in case there is a tie on first member then comparision is done on second member

	for (pair<int, int> p : v) {
		cout << p.first << " " << p.second << endl;
	}

	// [HW] try to sort vector<pair<>> on second member by creating a
	// custom comparator

	return 0;
}