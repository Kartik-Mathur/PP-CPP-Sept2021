// ReverseNumber.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	for ( ; n != 0 ; n = n / 10) {
		cout << n % 10;
	}
	// while (n != 0) {
	// 	cout << n % 10;

	// 	// n=n/10;
	// 	n /= 10;
	// }
	// cout << endl;


	// int ans = 0;
	// while (n != 0) {
	// 	// cout << n % 10;
	// 	ans = ans * 10 + n % 10;
	// 	// n=n/10;
	// 	n /= 10;
	// }
	// cout << ans << endl;
	// cout << ans + 10 << endl;

	return 0;
}
















