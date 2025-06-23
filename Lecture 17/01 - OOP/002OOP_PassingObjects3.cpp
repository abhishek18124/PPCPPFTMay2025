#include<iostream>

using namespace std;

class customer {

public :

	string name;
	int age;
	char gender;
	double credits;

};

void print(const customer& c) { // here, customer obj is passed by const ref
	cout << "name = " << c.name << endl;
	cout << "age = " << c.age << endl;
	cout << "gender = " << c.gender << endl;
	cout << "credits = " << c.credits << endl << endl;
	// c.age++; // error since c is a const-ref, you can use it to access customer but you cannot use it to modify customer
}

int main() {

	customer c1;

	c1.name = "Ramanujan";
	c1.age = 32;
	c1.gender = 'M';
	c1.credits = 1729;

	print(c1);

	customer c2;

	c2.name = "Aryabhata";
	c2.age = 74;
	c2.gender = 'M';
	c2.credits = 0;

	print(c2);

	return 0;
}