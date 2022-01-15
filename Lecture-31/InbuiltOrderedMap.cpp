// InbuiltOrderedMap.cpp
#include <iostream>
#include <map>
using namespace std;

int main() {

	map<string, int> h;

	// h.insert(); // Takes input of a pair
	// 1st way of insertion
	pair<string, int> p;
	p.first = "Mango";
	p.second = 100;

	h.insert(p);

	// 2nd way of insertion
	pair<string, int> p1("Apple", 150);
	// cout << p1.first << ", " << p1.second << endl;
	h.insert(p1);

	// 3rd way of insertion
	h.insert(make_pair("Pineapple", 80));

	// 4th way of insertion
	h["Papaya"] = 120;

	// 5th way of insertion
	h.insert({"Banana", 70});
	h.insert({"Kiwi", 170});

	// To print we use something that is called as for each loop
	for (auto p : h) {
		cout << p.first << ", " << p.second << endl;
	}



	return 0;
}

















