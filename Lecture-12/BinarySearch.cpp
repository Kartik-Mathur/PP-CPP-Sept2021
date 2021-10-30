// BinarySearch.cpp
#include <iostream>
using namespace std;

int BinarySearch(int *a, int s, int e, int key) {
	// base case
	if (s > e) {
		return -1;
	}

	// recursive case
	int m = (s + e) / 2;
	if (a[m] == key) {
		return m;
	}
	else if (a[m] > key) {
		return BinarySearch(a, s, m - 1, key);
	}
	else {
		return BinarySearch(a, m + 1, e, key);
	}

}

int main() {

	int a[] = {1, 2, 4, 5, 7, 8, 9};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; ++i)
	{
		cout << i << " ";
	}
	cout << endl;

	int key = 8;
	int indx = BinarySearch(a, 0, n - 1, key);

	cout << key << " found at indx: " << indx << endl;


	return 0;
}
















