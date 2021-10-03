// CelsiusToFahren.cpp
#include <iostream>
using namespace std;

void printTable(int initial, int final, int step) {
	int f = initial;
	while (f <= final) {
		// c = (5 / 9.0) * (f - 32);
		int c = 5 * (f - 32) / 9;

		cout << f << " " << c << endl;

		f = f + step;
	}
}

int main() {
	int initial, final, step;

	cin >> initial >> final >> step;

	printTable(initial, final, step);

	return 0;
}
















