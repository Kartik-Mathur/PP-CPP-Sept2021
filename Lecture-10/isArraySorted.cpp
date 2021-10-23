// isArraySorted.cpp
#include <iostream>
using namespace std;

bool isArraySorted(int *a, int n) {
	// base case
	if (n == 0 || n == 1) {
		return true;
	}

	// recursive
	bool isChotaSorted = isArraySorted(a + 1, n - 1);
	if (isChotaSorted == true and a[0] <= a[1]) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	int a[] = {1, 2, 4, 5, 6, 7, 8, 0};
	int n = sizeof(a) / sizeof(int);

	if (isArraySorted(a, n)) {
		cout << "Sorted" << endl;
	}
	else {
		cout << "Not Sorted" << endl;
	}

	return 0;
}
















