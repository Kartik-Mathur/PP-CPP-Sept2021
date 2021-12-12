// Stack.cpp
#include <iostream>
#include <stack> // STL: Standard Template Library
using namespace std;

int main() {

	// stack<data_type> s; //Syntax to create stack
	stack<int> s;// Syntax to create stack
	// push
	// top
	// pop
	// empty
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while (s.empty() != true) {
		cout << s.top() << endl;
		s.pop();
	}
	return 0;
}
















