#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;

	i = 1;
	int sum = 0;

	while (i <= n) {
		// Work
		if (i % 2 != 0) {
			cout << i << " ";
			sum = sum + i;
		}

		i = i + 1;
	}

	cout << endl;
	cout << "Sum is " << sum << endl;

	return 0;
}
















