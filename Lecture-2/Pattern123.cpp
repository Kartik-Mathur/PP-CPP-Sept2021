// Pattern123.cpp
#include <iostream>
using namespace std;

int main() {
	int n;

	int no = 1;
	int row , col;


	cin >> n;
	row = 1; // Initi
	while (row <= n) {
		// Har row ka kaam
		col = 1; // init
		while (col <= row) {
			cout << no << " ";

			no = no + 1;
			col = col + 1;
		}


		cout << '\n';
		row = row + 1; // Updation
	}


	return 0;
}
















