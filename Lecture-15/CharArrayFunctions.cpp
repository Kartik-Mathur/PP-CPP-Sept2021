// CharArrayFunctions.cpp
#include <iostream>
using namespace std;

int main() {

	char a[] = "Kartik Mathur";
	char b[100] = "Coding  Blocks";
	cout << strlen(b) << endl; // gives the number of characters in a character array
	// cout << sizeof(b) / sizeof(char) << endl;

	strcpy(b, a); // Copy array a into array b
	cout << strlen(a) << endl;
	// b = a; This will never work for character array
	for (int i = 0 ; a[i] != '\0'; i++) {
		b[i] = a[i];
	}


	cout << a << endl;
	cout << b << endl;
	return 0;
}
















