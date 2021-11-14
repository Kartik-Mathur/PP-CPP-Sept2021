// OOPs.cpp
#include <iostream>
using namespace std;

///////////////////// BLUEPRINT ////////////////////////
class Car {
public:
	char name[100];
	int price;
	int model;
	int year;
};
///////////////////// BLUEPRINT ////////////////////////

int main() {


	Car A;

	// A.name = "BMW";
	strcpy(A.name, "BMW");
	A.price = 100;
	A.model = 111;
	A.year = 2020;

	cout << A.name << endl;
	cout << A.price << endl;
	cout << A.model << endl;
	cout << A.year << endl;


	return 0;
}

// https://join.slack.com/t/codingblocks-mbk8031/shared_invite/zt-yws77ks1-9ooD3jTZv195bdx6VIRxoA














