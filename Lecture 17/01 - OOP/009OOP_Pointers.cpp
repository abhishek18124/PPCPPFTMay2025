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

};

int main() {

	customer c("Ramanujan", 32, 'M', 1729);
	cout << &c << endl;

	customer* cptr = &c;
	cout << cptr << endl;

	cout << (*cptr).name <<  " " << cptr->name << endl;
	cout << (*cptr).age << " " << cptr->age << endl;
	cout << (*cptr).gender << " " << cptr->gender << endl;
	cout << (*cptr).credits << " " << cptr->credits << endl;

	(*cptr).print();
	cptr->print();

	return 0;
}