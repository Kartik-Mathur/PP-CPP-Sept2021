// 2DArray.cpp
#include <iostream>
using namespace std;

int main() {

	// int a[3][4];
	// Initialization
	// int a[3][4] = {
	// 	{1, 2, 3, 4},
	// 	{4, 5, 6, 7},
	// 	{10, 11, 12, 13}
	// };

	int a[][4] = {
		{1, 2, 3, 4},
		{4, 5, 6, 7},
		{10, 11, 12, 13}
	};

	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;

	int n = 3, m = 4;
	// cout << a[0][2] << endl;
	for (int row = 0; row < n; ++row) {
		for (int col = 0 ; col < m ; col++) {
			cout << a[row][col] << " ";
		}
		cout << endl;
	}


	return 0;
}
















