// StackUsingQueues.cpp
#include <iostream>
#include <queue>
using namespace std;

class Stack {
	queue<int> q1;
	queue<int> q2;
public:

	void push(int data) {
		if (q1.empty() and q2.empty()) {
			q1.push(data);
		}
		else if (!q1.empty() and q2.empty()) {
			q1.push(data);
		}
		else {
			q2.push(data);
		}
	}

	int top() {
		if (!q1.empty() and q2.empty()) {
			// q1 ke n-1 elements uthar kar q2 ke andar daal do
			// and jo nth element bachega vo print hoga ya return krna hoga
			while (q1.size() > 1) {
				int f = q1.front();
				q1.pop();
				q2.push(f);
			}

			int t = q1.front();
			q1.pop();
			q2.push(t);
			return t;
		}
		else { // q2 is not empty and q1 is empty
			while (q2.size() > 1) {
				int f = q2.front();
				q2.pop();
				q1.push(f);
			}

			int t = q2.front();
			q2.pop();
			q1.push(t);
			return t;
		}
	}
	void pop() {
		if (!q1.empty() and q2.empty()) {
			// q1 ke n-1 elements uthar kar q2 ke andar daal do
			// and jo nth element bachega vo print hoga ya return krna hoga
			while (q1.size() > 1) {
				int f = q1.front();
				q1.pop();
				q2.push(f);
			}
			q1.pop();
		}
		else { // q2 is not empty and q1 is empty
			while (q2.size() > 1) {
				int f = q2.front();
				q2.pop();
				q1.push(f);
			}
			q2.pop();
		}
	}
	bool empty() {
		if (q1.empty() and q2.empty()) {
			return true;
		}
		return false;
	}

};

int main() {
	Stack s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}

	cout << endl;


	return 0;
}
















