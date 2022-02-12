// UniqueNumber - 2.cpp
#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[] = {1, 2, 5, 10, 5, 1, 2, 4};
	int n = sizeof(a) / sizeof(int);
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans = ans ^ a[i];
	}

	int no = 0;
	int pos = 0, x = ans;
	while ((x & 1) != 1) {
		pos++;
		x = x >> 1;
	}
	no = 1 << pos;

	int no1 = 0;
	for (int i = 0; i < n; ++i)
	{
		if ((no & a[i]) == 0) {
			no1 = no1 ^ a[i];
		}
	}
	int no2 = no1 ^ ans;
	cout << no1 << ", " << no2;

	return 0;
}
















