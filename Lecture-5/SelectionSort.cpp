// SelectionSort.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {3, 4, 2, 1, 0};
	int n = sizeof(a) / sizeof(int);
	cout << "Before Sorting: ";
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0 ; i <= n - 2; i ++) {
		int min = i;
		for (int j = i + 1; j < n ; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		swap(a[i], a[min]);
	}
	cout << "After Sorting: ";
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
















