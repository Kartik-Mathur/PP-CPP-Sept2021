// PatternBuildingABC.cpp
#include <iostream>
using namespace std;

int main() {

	int n = 3, i;
	char ch;
	for (i = 0 ; i <= n ; i++) {
		ch = i + 'A';
		cout << ch;
	}

	// cout << endl << "i: " << i; // right now, i is equals to n+1
	i--; // Here i will become n

	while (i >= 0) {
		ch = i + 'A';
		cout << ch;
		i--;
	}

	// while (i != 0) {
	// 	cout << i;

	// 	i--;
	// }

	// cout << i;


	cout << endl;

	return 0;
}
















