// PrintNumbers.cpp
// PrintStar.cpp
#include <iostream>
using namespace std;

int main() {

	int row, col, n;
	cin >> n;
	int number;

	number = 1;
	row = 1;
	while (row <= n) {
		number = 1;
		col = 1;
		while (col <= row) {
			cout << number << " ";
			number = number + 1;
			col = col + 1;
		}

		cout << '\n';
		row = row + 1;
	}


	return 0;
}
















