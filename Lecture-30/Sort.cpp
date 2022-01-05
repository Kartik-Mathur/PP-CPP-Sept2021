#include <iostream>
using namespace std;

bool compare(int a, int b) {
	return a > b;
}

int main() {

	int a[] = {5, 6, 3, 1, 4, 2};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	sort(a, a + n, compare);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















