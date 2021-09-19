#include <iostream>
using namespace std;

int main() {

	int initial, final, step, f, c;

	cin >> initial >> final >> step; // User input via cin

	f = initial;
	while (f <= final) {
		// c = (5 / 9.0) * (f - 32);
		c = 5 * (f - 32) / 9;

		cout << f << " " << c << endl;

		f = f + step;
	}



	return 0;
}
















