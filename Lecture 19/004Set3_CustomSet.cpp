#include<iostream>
#include<set>

using namespace std;

class customer {

public:
	string name;
	int age;

	customer(string name, int age) {
		this->name = name;
		this->age = age;
	}

};

class ageCmp {

public:

	// return true if you want a to be ordered before b otherwise
	// return false;

	bool operator()(customer a, customer b) const {
		if (a.age < b.age) {
			return true;
		}
		return false;
	}

};

int main() {

	set<customer, ageCmp> s;

	s.insert(customer("chaitanya", 20));
	s.insert(customer("hiya", 18));
	s.insert(customer("kanwaljeet", 19));
	s.insert(customer("saniya", 21));

	for (customer c : s) {
		cout << c.name << " " << c.age << endl;
	}

	cout << endl;

	return 0;
}