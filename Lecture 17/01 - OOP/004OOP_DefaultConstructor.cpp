#include<iostream>

using namespace std;

class customer {

public :

	string name;
	int age;
	char gender;
	double credits;

	customer() {
		cout << "\nI am inside the default constructor of customer class\n";
	}

	void print() {
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
		cout << "gender = " << gender << endl;
		cout << "credits = " << credits << endl;
	}
};

int main() {

	customer c1; // default constructor of the customer class is invoked automatically

	cin >> c1.name >> c1.age >> c1.gender >> c1.credits;

	c1.print(); // addr of c1 is passed automatically during this fn call

	return 0;
}