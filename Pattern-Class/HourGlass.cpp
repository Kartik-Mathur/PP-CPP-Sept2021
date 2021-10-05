// HourGlass.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int row = 1 ; row <= n + 1; row++) {
		// Spaces, row-1 times
		for (int i = 0; i < row - 1; ++i)
		{
			cout << "  ";
		}

		// Dec no's, Start: n-row+1
		for (int i = n - row + 1; i >= 0; i--)
		{
			cout << i << " ";
		}

		// Inc no's, 1->n-row+1
		for (int i = 1; i <= n - row + 1; ++i)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	for (int row = n ; row >= 1; row--) {
		// Spaces, row-1 times
		for (int i = 0; i < row - 1; ++i)
		{
			cout << "  ";
		}

		// Dec no's, Start: n-row+1
		for (int i = n - row + 1; i >= 0; i--)
		{
			cout << i << " ";
		}

		// Inc no's, 1->n-row+1
		for (int i = 1; i <= n - row + 1; ++i)
		{
			cout << i << " ";
		}
		cout << endl;
	}

	return 0;
}
















