// CountCharacters.cpp
// kartikmathur$
#include <iostream>
using namespace std;

int main() {

	char ch;
	int count = 0;

	// cin >> ch; // initialization
	ch = cin.get();
	while (ch != '$') { // condition check
		count++;

		// cin >> ch; // Updation
		ch = cin.get();
	}

	cout << "Total Characters " << count << endl;

	return 0;
}
















