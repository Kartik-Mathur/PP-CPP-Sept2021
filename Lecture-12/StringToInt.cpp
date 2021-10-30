// StringToInt.cpp
#include <iostream>
using namespace std;

int stringToInt(char*a, int n) {
	if (n == 0) {
		return 0;
	}

	int ld = a[n - 1] - '0';
	int chotaInt = stringToInt(a, n - 1);
	int badaInt = chotaInt * 10 + ld;
	return badaInt;
}

int main() {

	char a[100];
	cin >> a;
	int ans = stringToInt(a, strlen(a));

	cout << ans << endl;
	cout << ans + 10 << endl;

	return 0;
}
















