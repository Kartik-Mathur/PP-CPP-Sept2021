// Pattern0 - 1.cpp
#include <iostream>
using namespace std;

int main() {

	int n, row, cnt;
	cin >> n;

	row = 1;
	while (row <= n) {
		cout << 1;
		cnt = 1;
		while (cnt <= row - 1) {
			cout << 0;

			cnt = cnt + 1;
		}

		if (row > 1) {
			cout << 1;
		}
		cout << '\n';
		row = row + 1;
	}

	return 0;
}
















