// PrintStar.cpp
#include <iostream>
using namespace std;

int main() {

	int row, col, n;
	cin >> n;

	row = 1;
	while (row <= n) {
		col = 1;
		while (col <= row) {
			cout << '*';
			col = col + 1;
		}

		cout << '\n';
		row = row + 1;
	}


	return 0;
}
















