#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class customer {

public:

	string name;
	int age;
	char gender;
	double credits;

	customer(string name, int age, char gender, double credits) {
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->credits = credits;
	}
};

// return true if you want a to be ordered before b otherwise
// return false

bool agecmp(customer a, customer b) {
	if (a.age < b.age) {
		// since we are sorting customer by age in inc. order
		// we want a to be ordered before b when a.age is less
		// than b.age
		return true;
	}
	return false;
}

class CreditCmp {

public:

	// return true if you want a to be ordered before b otherwise
	// return false

	bool operator()(customer a, customer b) {
		if (a.credits > b.credits) {
			// since we are sorting customer by credits in dec. order
			// we want a to be ordered before b when a.credits are more
			// than b.credits
			return true;
		}
		return false;
	}

};

int main() {

	vector<customer> v;

	// customer c1("Ramanujan", 32, 'M', 1729);
	// v.push_back(c1);

	v.push_back(customer("Ramanujan", 32, 'M', 1729));
	v.push_back(customer("JC Bose", 78, 'M', 2500));
	v.push_back(customer("Aryabhata", 74, 'M', 0));
	v.push_back(customer("Vikram", 52, 'M', 1500));
	v.push_back(customer("Homi", 56, 'M', 1000));

	for (customer c : v) {
		cout << c.name << " " << c.age << " " << c.gender << " " << c.credits << endl;
	}

	cout << endl;

	sort(v.begin(), v.end(), agecmp);

	for (customer c : v) {
		cout << c.name << " " << c.age << " " << c.gender << " " << c.credits << endl;
	}

	cout << endl;

	CreditCmp obj;
	sort(v.begin(), v.end(), obj);

	for (customer c : v) {
		cout << c.name << " " << c.age << " " << c.gender << " " << c.credits << endl;
	}


	return 0;
}