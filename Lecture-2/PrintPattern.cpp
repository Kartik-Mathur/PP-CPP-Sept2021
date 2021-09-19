// PrintPattern.cpp
#include <iostream>
using namespace std;

int main() {

	int n, i, no;
	int row;

	cin >> n;

	row = 1;
	while (row <= n) {
		// 1. print n-row times spaces
		i = 1;
		while (i <= n - row) {
			cout << " ";
			i = i + 1;
		}
		// 2. Print increasing numbers row times, start: row
		i = 1;
		no = row;
		while (i <= row) {
			cout << no;
			no = no + 1;

			i = i + 1;
		}
		// 3. Print decreasing numbers row-1 times, start: 2*row - 2
		i = 1;
		no = 2 * row - 2;
		while (i < row) {
			cout << no;
			no = no - 1;

			i = i + 1;
		}

		cout << '\n';
		row = row + 1;
	}


	return 0;
}
















