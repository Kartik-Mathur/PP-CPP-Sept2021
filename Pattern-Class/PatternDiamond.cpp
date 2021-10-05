// PatternDiamond.cpp
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int row = 1 ; row <= n ; row++) {
		// 1. Print n-row times spaces
		for (int i = 1 ; i <= n - row ; i++) {
			cout << "*";
		}

		// 2. Print '*' one time
		cout << "*";

		// 3. Print spaces 2*row-3 times
		for (int i = 1 ; i <= 2 * row - 3 ; i++) {
			cout << " ";
		}

		// 4. Print '*' one time
		if (row != 1) {
			cout << "*";
		}
		for (int i = 1 ; i <= n - row ; i++) {
			cout << "*";
		}
		cout << "\n";
	}

	for (int row = 1 ; row < n ; row ++) {
		// 1. Print row times spaces
		for (int i = 1 ; i <= row ; i++) {
			cout << "*";
		}
		// 2. Print '*'
		cout << "*";

		// 3. Print spaces 2*(n-row-1) - 1
		for (int i = 1 ; i <= 2 * (n - row - 1) - 1 ; i++) {
			cout << " ";
		}
		// 4. Print '*'
		if (row != n - 1) {
			cout << "*";
		}
		for (int i = 1 ; i <= row ; i++) {
			cout << "*";
		}
		cout << endl;

	}


	return 0;
}
















