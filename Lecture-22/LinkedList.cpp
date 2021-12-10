// LinkedList.cpp
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

int lengthLL(node* head) {
	int count = 0;
	while (head) {
		count++;
		head = head->next;
	}
	return count;
}


void insertAtBegin(node* &head, node* &tail, int data) {
	if (head == NULL) {
		node* n = new node(data);
		head = tail = n;
	}
	else {
		node* n = new node(data);
		n->next = head;
		head = n;
	}
}

void insertAtEnd(node* &head, node* &tail, int data) {
	if (head == NULL) {
		node* n = new node(data);
		head = tail = n;
	}
	else {
		node* n = new node(data);
		tail->next = n;
		tail = n;
	}
}

void deleteAtBegin(node* &head, node* &tail) {
	if (head == NULL) {
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

void deleteAtEnd(node* &head, node* &tail) {
	if (head == NULL) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		while (temp->next != tail) {
			temp = temp->next;
		}

		delete tail;
		temp->next = NULL;
		tail = temp;
	}
}

void deleteAtMid(node* &head, node* &tail, int pos) {
	if (pos == 0) {
		deleteAtBegin(head, tail);
	}
	else if (pos >= lengthLL(head) - 1) {
		deleteAtEnd(head, tail);
	}
	else {
		node* temp = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			temp = temp->next;
		}
		node* n = temp->next;
		temp->next = n->next;
		delete n;
	}
}

void insertAtMid(node* &head, node* &tail, int data, int pos) {
	if (pos == 0) {
		insertAtBegin(head, tail, data);
	}
	else if (pos >= lengthLL(head)) {
		insertAtEnd(head, tail, data);
	}
	else {
		node* temp = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			temp = temp->next;
		}

		node* n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}

void printLL(node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;
}

bool searchInterativeLL(node* head, int key) {
	while (head) {
		if (head->data == key) {
			return true;
		}
		head = head->next;
	}
	return false;
}

node* searchRecursiveLL(node* head, int key) {
	// base case
	if (!head) {
		return NULL;
	}

	// recursive case
	if (head->data == key) {
		return head;
	}

	node* BaakiMeiHaiKya = searchRecursiveLL(head->next, key);
	// BaakiMeiHaiKya == NULL or BaakiMeiHaiKya can be a valid node address
	return BaakiMeiHaiKya;
}

void reverseLL(node* &head, node* &tail) {
	node* c = head;
	node* p = NULL;
	node* n;

	while (c != NULL) {
		n = c->next;
		c->next = p;
		p = c;
		c = n;
	}
	swap(head, tail);
}

node* midLL(node* head) {
	if (head == NULL) {
		return NULL;
	}
	if (head->next == NULL) {
		return head;
	}

	node* s = head;
	node* f = head->next;
	while (f != NULL and f->next != NULL) {
		f = f->next->next;
		s = s->next;
	}
	return s;
}

void BubbleSort(node* &head) {
	int n = lengthLL(head);

	for (int i = 0; i < n - 1; ++i)
	{
		node* c = head;
		node* p = NULL;
		while (c and c->next) {
			node* n = c->next;
			if (c->data > n->data) {
				// swapping hogi
				if (p == NULL) {
					// head change hoga
					c->next = n->next;
					n->next = c;
					head = p = n;
				}
				else {
					// head change nhi hoga
					c->next = n->next;
					n->next = c;
					p->next = n;
					p = n;
				}
			}
			else {
				// swapping nahi hogi
				p = c;
				c = c->next;
			}
		}
	}
}

int main() {
	node* head, * tail;
	head = tail = NULL;

	insertAtBegin(head, tail, 1);
	insertAtBegin(head, tail, 2);
	insertAtBegin(head, tail, 3);
	insertAtBegin(head, tail, 4);
	insertAtBegin(head, tail, 5);
	insertAtBegin(head, tail, 6);
	printLL(head);
	// cout << "Length: " << lengthLL(head) << endl;
	BubbleSort(head);
	printLL(head);
	// deleteAtMid(head, tail, 3);
	// reverseLL(head, tail);
	// printLL(head);
	// node* m = midLL(head);
	// cout << m->data << endl;
	// while (head) {
	// 	// deleteAtBegin(head, tail);
	// 	deleteAtEnd(head, tail);
	// 	printLL(head);
	// }

	// cout << "Length: " << lengthLL(head) << endl;
	// if (searchInterativeLL(head, 5)) {
	// 	cout << "Present" << endl;
	// }
	// else {
	// 	cout << "Not Present" << endl;
	// }

	// node* ans = searchRecursiveLL(head, 4);
	// if (ans != NULL) {
	// 	cout << "Found:" << ans->data << endl;
	// }
	// else {
	// 	cout << "Not Found" << endl;
	// }

	return 0;
}
















