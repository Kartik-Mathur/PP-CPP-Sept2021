// UniqueNumber - 1.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5, 1, 3, 2, 4};
	int n = sizeof(a) / sizeof(int);

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans = ans ^ a[i];
	}
	cout << ans << endl;
	return 0;
}
















