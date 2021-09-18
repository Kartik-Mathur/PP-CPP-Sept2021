// Conditionals.cpp
#include <iostream>
using namespace std;

int main() {

	int x = 1200;

	// x: 1,5 : Hello
	// x: 6,10: world
	// x: 11,15 : hello world
	// x: Coding Blocks
	if (x >= 1 && x <= 5) {
		cout << "Hello" << '\n';
	}
	else if ( x >= 6 and x <= 10) {
		cout << "World" << '\n';
	}
	else if (x >= 11 and x <= 15) {
		cout << "Hello World" << '\n';
	}
	else {
		cout << "Coding Blocks" << '\n';
	}


	int a = 1;

	if (a >= 10) {
		// work to be done, if(condn), condn is true
		cout << "Hello" << '\n';
	}
	else {
		// if(condn) fails, then execute else
		cout << "World" << '\n';
	}

	return 0;
}
















