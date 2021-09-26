// PatternABC.cpp
#include <iostream>
using namespace std;

int main() {

	int n, row, i;
	cin >> n;

	for (row = 1 ; row <= n ; row++) {
		// Work
		char ch = 'A';
		// Print increasing characters from 'A', n-row+1 times
		for (i = 1 ; i <= n - row + 1 ; i++) {
			cout << ch;
			ch++;
		}

		ch--;

		for (i = 1 ; i <= n - row + 1 ; i++) {
			cout << ch;
			ch--;
		}
		cout << endl;
	}




	return 0;
}
















