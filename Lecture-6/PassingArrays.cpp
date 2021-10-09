// PassingArrays.cpp
#include <iostream>
using namespace std;

void printArray(int a[], int n) { // Don't Mention size in brackets int a[], while passing
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void bubbleSort(int a[5], int n) {// Mention size in brackets int a[5], while passing
	for (int i = 0 ; i < n - 1 ; i++) {
		for (int j = 0 ; j < n - i - 1 ; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}

int main() {

	int a[5] = {5, 4, 3, 2, 1};
	// int n = 5;
	int n = sizeof(a) / sizeof(int);// This can only be done where we create the array

	printArray(a, n);
	bubbleSort(a, n);
	printArray(a, n);
	return 0;
}
















