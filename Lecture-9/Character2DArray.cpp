// Character2DArray.cpp
#include <iostream>
using namespace std;

int main() {

	char a[][4] = {
		{'A', 'B', 'C' , '\0'},
		{'D', 'E', 'F', '\0'},
		{'G', 'H', 'I', '\0'}
	};

	cout << a[0] << endl; // ABC
	cout << a[1] << endl; // DEF
	cout << a[2] << endl; // GHI

	return 0;
}
















