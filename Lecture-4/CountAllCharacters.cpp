// CountAllCharacters.cpp
#include <iostream>
using namespace std;

int main() {

	char ch;

	int digits = 0, alpha = 0, space = 0, special = 0;

	ch = cin.get();
	while (ch != '$') {
		if (ch >= 'A' and ch <= 'Z' || ch >= 'a' and ch <= 'z') {
			alpha ++;
		}
		else if (ch == ' ' || ch == '\t' || ch == '\n') {
			space ++;
		}
		else if (ch >= '0' and ch <= '9') {
			digits++;
		}
		else {
			special ++;
		}
		ch = cin.get();
	}
	cout << "Digits: " << digits << endl;
	cout << "Alphabets: " << alpha << endl;
	cout << "Special: " << special << endl;
	cout << "Spaces: " << space << endl;

	return 0;
}
















