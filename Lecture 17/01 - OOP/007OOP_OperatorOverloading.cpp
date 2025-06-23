#include<iostream>

using namespace std;

class customer {

public :

	string name;
	int age;
	char gender;
	double credits;

	customer(string n, int a, char g, double c) {
		cout << "\ninside the parameterised constructor of the \'customer\' class\n" << endl;
		name = n;
		age = a;
		gender = g;
		credits = c;
	}

	void print() {
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
		cout << "gender = " << gender << endl;
		cout << "credits = " << credits << endl << endl;
	}

	bool operator>(customer c) {
		return age > c.age;
	}

	int operator+(customer c) {
		return age + c.age;
	}

	double operator*(customer c) {
		return credits * c.credits;
	}

};

int operator-(customer c1, customer c2) {
	return c1.age - c2.age;
}

// void operator<<(ostream& cout, customer& c) {
// 	cout << c.name << " " << c.age << " " << c.gender << " " << c.credits << endl;
// }

ostream& operator<<(ostream& cout, customer& c) {
	cout << c.name << " " << c.age << " " << c.gender << " " << c.credits << endl;
	return cout;
}

int main() {

	customer c1("Ramanujan", 80, 'M', 1.5);
	customer c2("Aryabhata", 74, 'M', 2.5);

	// cout << c1; // operator<<(cout, c1)

	cout << c1 << c2;

	// c1 > c2 => c1.operator>(c2)

	c1 > c2 ? cout << c1.name << " is older than " << c2.name << endl :
	               cout << c1.name << " is younger than " << c2.name << endl;

	if (c1 > c2) {
		cout << c1.name << " is older than " << c2.name << endl;
	} else {
		cout << c1.name << " is younger than " << c2.name << endl;
	}

	cout << c1 + c2 << endl; // c1.operator+(c2) // we are overloading operator as a member fn

	cout << c1 * c2 << endl; // c1.operator*(c2)

	cout << c1 - c2 << endl; // c1.operator-(c2) // operator-(c1, c2) // we are overloading operator as a non-member fn

	return 0;

}