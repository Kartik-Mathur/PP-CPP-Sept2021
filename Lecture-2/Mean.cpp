// Mean.cpp
#include <iostream>
#include <climits> // INT_MAX: 2^31 -1, INT_MIN: -2^31
using namespace std;

int main() {

	int n, i, no, sum, mi, mx;

	cin >> n;

	mi = INT_MAX; // 2^31-1
	mx = INT_MIN; // -2^31
	sum = 0;
	i = 1;
	while (i <= n) {

		cin >> no;
		if (no > mx) {
			mx = no;
		}
		if (no < mi) {
			mi = no;
		}
		sum = sum + no;

		i = i + 1;
	}

	cout << "Mean : " << sum / n << endl;
	cout << "Maximum: " << mx << endl;
	cout << "Minimum: " << mi << endl;


	return 0;
}
















