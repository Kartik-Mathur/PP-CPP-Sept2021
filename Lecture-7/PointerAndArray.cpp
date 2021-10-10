// PointerAndArray.cpp
#include <iostream>
using namespace std;

void printArray(int *x, int n) {
	for (int i = 0 ; i < n ; i++) {
		// cout << *(x + i) << " ";
		cout << x[i] << " ";
	}
}

int main() {

	int a[] = {1, 2, 3, 4};
	int n = sizeof(a) / sizeof(int);

	int *x = a;
	printArray(a, n);

	// for (int i = 0 ; i < n ; i++) {
	// 	cout << *(x + i) << " " << *(a + i) << endl;
	// }
	cout << endl;

	return 0;
}
















