// PrintPattern.cpp
#include <iostream>
using namespace std;

int main() {

	int n, row, cnt, no, j;
	cin >> n;
	bool isPrime;
	row = 1;
	no = 2;
	while (row <= n) {
		// Write the work of every row here
		cnt = 1;
		while (cnt <= row) {
			// Check number is prime or not
			isPrime = true;
			j = 2;
			while (j <= no - 1) {
				if (no % j == 0) {
					isPrime = false;
				}
				j = j + 1;
			}

			if (isPrime == true) {
				cout << no << " ";
				cnt = cnt + 1;
			}

			no = no + 1;
		}

		cout << '\n';
		row = row + 1;
	}


	return 0;
}
















