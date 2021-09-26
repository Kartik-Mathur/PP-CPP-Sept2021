// PrintPrimes.cpp
#include <iostream>
using namespace std;

int main() {

	int n, no, i;
	cin >> n;

	for (no = 2 ; no <= n ; no++) {
		// check if a no is prime or not
		for (i = 2 ; i <= no - 1 ; i++) {
			if (no % i == 0) {
				break;
			}
		}

		if (i == no) {
			// print if prime
			cout << no << " ";
		}
	}
	cout << endl;
	return 0;
}
















