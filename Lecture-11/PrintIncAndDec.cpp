// PrintIncAndDec.cpp
#include <iostream>
using namespace std;

void printDec(int n) {
	// Base case
	if (n == 0) {
		return;
	}

	// Recursive case
	printDec(n - 1);
	cout << n << " ";
}

int main() {

	int n;
	cin >> n;

	printDec(n);

	return 0;
}
















