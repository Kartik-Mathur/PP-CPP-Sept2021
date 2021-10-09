// BinarySearch.cpp
#include <iostream>
using namespace std;

int BinarySearch(int a[], int n, int key) {
	int s = 0;
	int e = n - 1;

	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == key) {
			return mid;
		}
		else if (a[mid] < key) {
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}
	return -1;
}

int main() {
	int a[] = {1, 3, 5, 6, 7, 9, 10};
	int n = sizeof(a) / sizeof(int);
	int key = 0;
	int indx = BinarySearch(a, n, key);
	if (indx == -1) {
		cout << "Key Not Found" << endl;
	}
	else {
		cout << "Key found at " << indx << endl;
	}

	return 0;
}
















