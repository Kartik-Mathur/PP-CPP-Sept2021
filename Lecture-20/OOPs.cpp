// OOPs.cpp
#include <iostream>
#include <cstring>
using namespace std;

///////////////////// BLUEPRINT ////////////////////////
class Car {
private:
	int price;
public:
	char name[100];
	int model;
	int year;

	// 1.Default Constructor
	Car() {
		cout << "Creating Object using Default Constructor" << endl;
	}

	// 2.Parameterized Constructor
	Car(char *n, int p, int m, int y) {
		cout << "Creating Object using Parameterized Constructor" << endl;
		strcpy(name, n);
		price = p;
		model = m;
		year = y;
	}

	// 3. Copy Constructor
	Car(Car &X) {
		cout << "Creating Object using Copy Constructor" << endl;
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		year = X.year;
	}

	void print() {
		cout << "Name : " << name << endl;
		cout << "Price: " << price << endl;
		cout << "Model: " << model << endl;
		cout << "Year : " << year << endl << endl;
	}

	void setPrice(int p) {
		if (p > 100) {
			price = p;
		}
		else {
			price = 120;
		}
	}

	int getPrice() {
		return price;
	}

	void operator+=(Car X) {
		cout << "Inside Operator Overloading" << endl;
		// name = "BMW",X.name = "Audi"
		strcat(name, X.name);
		// name = "BMWAUDI";
		price += X.price;
		model += X.model;
		year += X.year;

	}

	~Car() {
		cout << "Destructing car" << name << endl;
	}
};
///////////////////// BLUEPRINT ////////////////////////
ostream& operator<<(ostream &os, Car &X) {
	cout << "Name : " << X.name << endl;
	cout << "Price: " << X.getPrice() << endl;
	cout << "Model: " << X.model << endl;
	cout << "Year : " << X.year << endl << endl;

	return os;
}

istream& operator>>(istream& is, Car &X) {
	char a[100];
	int p, m, y;
	cin >> a >> p >> m >> y;
	strcpy(X.name, a);
	X.setPrice(p);
	X.model = m;
	X.year = y;

	return is;
}

int main() {
	Car A;
	cin >> A;
	// strcpy(A.name, "BMW");
	// // A.price = -100;
	// A.setPrice(-100);
	// cout << A.getPrice() << endl;
	// A.model = 111;
	// A.year = 2020;
	// char n[] = "Audi";
	Car B("Audi", 200, 112, 2019);

	// Car C(B.name, B.price, B.model, B.year);

	// 3. Copy Constructor
	Car C = B; // or Car C(B);
	Car D("Maruti", 120, 113, 2018);

	// cout << "Creating Car E" << endl;
	// Car *E = new Car;
	// strcpy((*E).name, "ford");
	// (*E).price = 50;
	// (*E).model = 114;
	// (*E).year = 2018;

	// delete E;
	// E = NULL;

	// A.print();
	cout << A << endl;
	cout << B << endl;
	// B.print();
	// A += B;
	// A.print();
	// C.print();
	// D.print();

	return 0;
}














