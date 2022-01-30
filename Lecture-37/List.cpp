// List.cpp
#include <iostream>
#include <list>
using namespace std;

#define pb push_back
#define pf push_front

int main() {

	list<int> l;
	list<int>::iterator it;


	l.pb(1);
	l.pb(2);
	l.pb(3);

	l.pf(4);
	l.pf(5);
	l.pf(6);
	it = l.begin();
	it++;
	it++;
	it++;
	l.insert(it, 10);


	for (auto it = l.begin() ; it != l.end() ; it++) {
		cout << *it << "-->";
	}
	cout << endl;

	for (auto data : l) {
		cout << data << "-->";
	}
	cout << endl;

	return 0;
}
















