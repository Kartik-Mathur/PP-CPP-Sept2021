// SumOfN.cpp
#include <iostream>
using namespace std;

int SumOfN(int n) {
	// base case
	if (n == 0) {
		return 0;
	}

	// recurrence relation
	// SumOfN(n) = n + SumOfN(n - 1);
	return n + SumOfN(n - 1);
	// int chotaAns = SumOfN(n - 1);
	// int BadaAns = n + chotaAns;

	// return BadaAns;
}

int main() {

	int n;
	cin >> n;

	cout << SumOfN(n) << endl;

	return 0;
}
















