// UserInput2DArray.cpp
// 2DArray.cpp
#include <iostream>
using namespace std;

int main() {

	int a[1000][1000];

	int n, m;
	cout << "Enter rows and cols: ";
	cin >> n >> m;

	for (int row = 0; row < n; ++row) {
		for (int col = 0 ; col < m ; col++) {
			cin >> a[row][col];
		}
	}


	for (int row = 0; row < n; ++row) {
		for (int col = 0 ; col < m ; col++) {
			cout << a[row][col] << " ";
		}
		cout << endl;
	}

	return 0;
}
















