// DMA.cpp
#include <iostream>
using namespace std;

int *createMemory(int n) {
	int *arr = new int[n];

	for (int i = 0 ; i < n ; i++) {
		arr[i] = (i + 1) * 10;
	}
	return arr;
}

int main() {

	int *a = new int;
	*a = 10;
	cout << *a << endl;
	// *a = *a + 1;
	(*a)++;
	cout << *a << endl;

	int n;
	cin >> n;
	int *arr = createMemory(n);
	// arr = new int[n];
	// for (int i = 0 ; i < n ; i++) {
	// 	arr[i] = i + 1;
	// }

	for (int i = 0 ; i < n ; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}
















