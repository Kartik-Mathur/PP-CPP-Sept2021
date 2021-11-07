#include <iostream>
using namespace std;

int ways(int i, int j) {
	// base case
	if (i == 0 and j == 0) {
		return 1;
	}

	if (i < 0 || j < 0) {
		return 0;
	}

	return ways(i - 1, j) + ways(i, j - 1);
}

int main() {

	int n, m;
	cin >> n >> m;
	cout << ways(n, m) << endl;

	return 0;
}
















