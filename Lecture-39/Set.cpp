// Set.cpp
#include <iostream>
#include <set>
using namespace std;

int main() {

	// Duplicate data nhi ho skta
	// Iske andar data is always sorted
	set<int> s;

	s.insert(1);
	s.insert(2);
	s.insert(7);
	s.insert(10);
	s.insert(3);
	s.insert(5);
	s.insert(0);

	while (!s.empty()) {

		cout << *s.begin() << " ";
		s.erase(s.begin());
	}

	cout << endl;


	return 0;
}
















