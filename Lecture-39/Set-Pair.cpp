// Set - Pair.cpp
#include <iostream>
#include <set>
using namespace std;

int main() {

	set< pair<int, string> > s;

	s.insert({100, "Mango"});
	s.insert({120, "Apple"});
	s.insert({50, "Kiwi"});
	s.insert({80, "Banana"});
	s.insert({20, "Chiku"});

	// Searching in set and Updating in set
	// set<pair<int, string> > ::iterator address = s.find({100, "Mango"});

	auto address = s.find({100, "Mango"});
	if (address != s.end()) {
		auto p = *address;
		cout << p.first << "," << p.second << endl;
		// p.first = 80;
		// Updation inside set is done like this:
		// 1. Find the element {100,"Mango"}
		// We have the elements address already

		// 2. Delete the element
		s.erase(address);

		// 3. Insert the new element {80,"Mango"}
		s.insert({80, "Mango"});
	}
	else {
		cout << "Not Found" << endl;
	}


	// Iteration on set

	while (!s.empty()) {
		auto p = *(s.begin());
		cout << "(" << p.first << ", " << p.second << ") ";
		s.erase(s.begin());
	}
	cout << endl;

	// for (auto it = s.begin(); it != s.end() ; it++) {
	// 	auto p = *it;
	// 	cout << "{" << p.first << "," << p.second << "}" << endl;
	// }

	return 0;
}
















