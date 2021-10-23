#include <iostream>
using namespace std;

int fact(int n) {
	// Base case
	if (n == 0) {
		return 1;
	}

	// Recurrence relation
	// fact(n) = n*fact(n-1);
	return n * fact(n - 1);
	// int chotaAns = fact(n - 1); // Assume karlo yeh laakar dega
	// int BadaAns = n * chotaAns;

	// return BadaAns;
}

int main() {

	int n;
	cin >> n;

	cout << fact(n) << endl;

	return 0;
}
















