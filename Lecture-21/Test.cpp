// LinkedList.cpp
#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
};

void fun() {
	node a, b;
	a.data = 1;
	b.data = 2;
	a.next = &b;
	b.next = NULL;
	cout << a.data << "-->" << (*a.next).data << endl;
	cout << a.data << "-->" << a.next->data << endl;
}


int main() {



	return 0;
}
















