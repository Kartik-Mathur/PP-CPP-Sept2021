// Powerof2.cpp
#include <iostream>
using namespace std;

int solve(int n) {
	// base case
	if (n == 0) {
		return 1;
	}

	// recursive case
	// solve(n) = 2*solve(n-1);
	int chotaAns = solve(n - 1);
	int BadaAns = 2 * chotaAns;
	return BadaAns;
}

int main() {

	int n;
	cin >> n;

	cout << solve(n) << endl;


	return 0;
}
















