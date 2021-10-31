// NStairs.cpp
#include <iostream>
using namespace std;

int stairs(int n) {
	// base case
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}

	return stairs(n - 1) + stairs(n - 2) + stairs(n - 3);
}

int Nstairs(int n, int k) {
	// base case
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}

	int ans = 0;
	for (int i = 1; i <= k; ++i)
	{
		ans += Nstairs(n - i, k);
	}
	return ans;
}


int main() {

	cout << stairs(3) << endl;
	cout << stairs(4) << endl;
	cout << Nstairs(3, 3) << endl;
	cout << Nstairs(4, 5) << endl;

	return 0;
}
















