#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

class Queue {
	node* head, *tail;
public:
	Queue() {
		head = tail = NULL;
	}
	void push(int d) {
		if (head == NULL) {
			node* n = new node(d);
			head = tail = n;
		}
		else {
			node* n = new node(d);
			tail->next = n;
			tail = n;
		}
	}
	void pop() {
		if (!head) {
			return;
		}
		else if (head->next == NULL) {
			delete head;
			head = tail = NULL;
		}
		else {
			node* temp = head;
			head = head->next;
			delete temp;
		}
	}
	bool empty() {
		return head == NULL;
	}
	int front() {
		return head->data;
	}
};

int main() {

	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

	cout << endl;

	return 0;
}
















