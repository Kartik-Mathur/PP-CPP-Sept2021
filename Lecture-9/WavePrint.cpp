// WavePrint.cpp
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

void WavePrint(int a[][100], int n, int m) {
	for (int col = 0; col < m; ++col) {
		if (col % 2 == 0) {
			for (int row = 0 ; row < n ; row++) {
				cout << a[row][col] << " ";
			}
		}
		else {
			for (int row = n - 1 ; row >= 0 ; row--) {
				cout << a[row][col] << " ";
			}
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
	WavePrint(a, n, m);


	return 0;
}
















