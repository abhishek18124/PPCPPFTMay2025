#include<iostream>
#include<stack>

using namespace std;

// time : O(n)
// space: O(n) due stack<>

bool isBalanced(string& str) { // here, we are passing str by ref to avoid copy which can be expensive for string

	stack<char> s;

	for (char ch : str) {

		switch (ch) {

		case '(': s.push(ch); break;
		case '[': s.push(ch); break;
		case '{': s.push(ch); break;
		case ')':
			if (!s.empty() and s.top() == '(') {
				s.pop();
			} else {
				return false;
			}
			break;
		case ']': if (!s.empty() and s.top() == '[') s.pop(); else return false; break;
		case '}': if (!s.empty() and s.top() == '{') s.pop(); else return false; break;

		}

	}

	return s.empty();

}

int main() {

	string str = "()([{}])";

	isBalanced(str) ? cout << "balanced!" << endl : cout << "not balanced!" << endl;

	return 0;

}