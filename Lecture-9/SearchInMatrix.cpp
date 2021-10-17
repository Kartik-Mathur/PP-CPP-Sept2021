// SearchInMatrix.cpp
#include <iostream>
using namespace std;

void print2D(int a[][100], int n, int m) {
	for (int row = 0; row < n; ++row) {
		for (int col = 0 ; col < m ; col++) {
			cout << a[row][col] << " ";
		}
		cout << endl;
	}
}

void SearchInMatrix(int a[][100], int n, int m, int key) {
	bool KeyPresentHai = false;
	for (int row = 0; row < n; ++row) {
		for (int col = 0 ; col < m ; col++) {
			if (a[row][col] == key) {
				KeyPresentHai = true;
				cout << "Key found at " << row << "," << col << endl;
				break;
			}
		}
		if (KeyPresentHai == true) {
			break;
		}
	}
}

int main() {

	int n, m;
	cin >> n >> m;
	int key = 10;
	int a[100][100];
	int number = 1;
	for (int row = 0; row < n; ++row) {
		for (int col = 0 ; col < m ; col++) {
			a[row][col] = number++;
		}
	}

	print2D(a, n, m);
	SearchInMatrix(a, n, m, key);


	return 0;
}
















