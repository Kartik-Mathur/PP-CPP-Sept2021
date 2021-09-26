// UpperLower.cpp
#include <iostream>
using namespace std;

int main() {

	char ch;
	int x;

	cin >> ch;

	x = ch;

	cout << "Char: " << ch << ",  ASCII Code: " << x << endl;
	if (x >= 65 && x <= 90) {
		cout << "Upper Case" << endl;
	}
	else if (x >= 97 && x <= 122) {
		cout << "Lower Case" << endl;
	}
	else {
		cout << "Special Character" << endl;
	}

	if (ch >= 'A' && ch <= 'Z') {
		cout << "Upper Case" << endl;
	}
	else {
		cout << "Lower Case" << endl;
	}

	// if (x >= 65 && x <= 90) {
	// 	cout << "Upper Case" << endl;
	// }
	// else {
	// 	cout << "Lower Case" << endl;
	// }



	return 0;
}
















