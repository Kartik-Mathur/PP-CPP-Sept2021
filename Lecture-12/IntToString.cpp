#include <iostream>
using namespace std;

char a[][100] = {
	"zero", "one", "two", "three", "four", "five", "six", "seven", "eight",
	"nine"
};

void intToString(int n) {
	// base case
	if (n == 0) {
		return;
	}
	// recursive case
	int last_digit = n % 10;
	intToString(n / 10);
	cout << a[last_digit] << " ";
}

int main() {
	int n;
	cin >> n;

	intToString(n);

	cout << endl;

	return 0;
}
















