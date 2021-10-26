// SumOfArray.cpp
#include <iostream>
using namespace std;

int SumOfArray(int *a, int n) {
	// base case
	if (n == 0) {
		return 0;
	}

	// Recursive case
	int ChotaSum = SumOfArray(a, n - 1);
	int BadaSum = ChotaSum + a[n - 1];

	return BadaSum;
}

int main() {

	int a[] = {1, 2, 4, 8};
	int n = sizeof(a) / sizeof(int);

	cout << SumOfArray(a, n) << endl;

	return 0;
}
















