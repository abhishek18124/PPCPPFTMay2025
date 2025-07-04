#include<iostream>
#include<stack>

using namespace std;

int main() {

	stack<int> s;

	s.push(10);
	s.push(20);
	s.push(30);

	cout << "size : " << s.size() << endl; // 3
	cout << "top : " << s.top() << endl; // 30

	s.pop(); // 30 popped

	cout << "size : " << s.size() << endl; // 2
	cout << "top : " << s.top() << endl; // 20

	s.pop(); // 20 popped
	s.pop(); // 10 popped

	cout << "size : " << s.size() << endl; // 0
	cout << "empty : " << s.empty() << endl; // true

	return 0;

}