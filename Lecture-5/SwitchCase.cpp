// SwitchCase.cpp
#include <iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch;

	switch (ch) {
	case 'N':
	case 'n':
		cout << "North" << endl;
		break;
	case 'E':
	case 'e':
		cout << "East" << endl;
		break;
	case 'w':
	case 'W':
		cout << "West" << endl;
		break;
	case 'S':
	case 's':
		cout << "South" << endl;
		break;
	default:
		cout << "Not a valid input" << endl;
	}

	return 0;
}
















