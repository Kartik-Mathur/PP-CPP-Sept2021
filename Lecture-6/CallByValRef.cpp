// CallByValRef.cpp
#include <iostream>
using namespace std;

void update(int x) {
	x = x + 1;
	cout << "X: " << x << endl;
}

void update1(int &x) {
	x = x + 1;
	cout << "X: " << x << endl;
}

int main() {

	int a = 1;
	cout << "Before Update: " << a << endl;

	update1(a);
	cout << "After Update: " << a << endl;

	return 0;
}
















