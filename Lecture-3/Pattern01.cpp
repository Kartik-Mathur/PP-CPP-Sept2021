// Pattern01.cpp
#include <iostream>
using namespace std;

int main() {

	int n, no, row, i;
	cin >> n;

	for (row = 1 ; row <= n ; row++) {
		// Identify the initial value of no
		if (row % 2 == 0) {
			no = 0;
		}
		else {
			no = 1;
		}
		// now print the row times number and toggle the number,
		// after every print
		for (i = 1; i <= row ; i++) {
			cout << no << " ";
			no = 1 - no;
		}

		cout << endl;
	}

	return 0;
}
















