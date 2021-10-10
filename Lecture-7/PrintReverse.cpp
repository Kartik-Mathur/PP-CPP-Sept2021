#include <iostream>
using namespace std;

void printArray(int *a, int n) {
	for (int i = n - 1 ; i >= 0 ; i--) {
		// cout << *(a + i) << " ";
		cout << a[i] << " ";
	}
	cout << endl;

}

int main() {

	int a[] = {6, 5, 4, 3, 2, 1};
	int n = 6;

	printArray(a, n);


	return 0;
}
















