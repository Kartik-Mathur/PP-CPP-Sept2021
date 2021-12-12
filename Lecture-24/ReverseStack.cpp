// ReverseStack.cpp
#include <iostream>
#include <stack>
using namespace std;

void push_bottom(stack<int> &s, int topElement) {
	// base case
	if (s.empty()) {
		s.push(topElement);
		return;
	}

	// recursive case
	int top = s.top();
	s.pop();
	push_bottom(s, topElement);
	s.push(top);
}

void ReverseStack(stack<int> &s) {
	// base case
	if (s.empty()) {
		return;
	}

	// recursive case
	int topElement = s.top();
	s.pop();
	ReverseStack(s);
	push_bottom(s, topElement);
}

int main() {

	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	ReverseStack(s);
	while (s.empty() != true) {
		cout << s.top() << endl;
		s.pop();
	}

	return 0;
}
















