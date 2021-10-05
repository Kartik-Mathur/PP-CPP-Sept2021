#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int row = 1 ; row <= n - 1; row++) {
		// Work
		// 1. Print row times increasing numbers, start: 1
		int no = 1;
		for (int j = 1 ; j <= row ; j++) {
			cout << no++ << " ";
		}
		// 2. Print 2*(n-row) - 1 times spaces
		for (int j = 1 ; j <= 2 * (n - row) - 1 ; j++) {
			cout << "  ";
		}
		// 3. Print row times decreasing numbers, start: row
		no = row;
		for (int j = 1 ; j <= row ; j++) {
			cout << no-- << " ";
		}

		cout << '\n';
	}

	for (int i = 1; i <= n ; i++) {
		cout << i << " ";
	}
	int no = n - 1;
	for (int i = 1 ; i < n ; i++) {
		cout << no-- << " ";
	}

	cout << endl;
	return 0;
}
















