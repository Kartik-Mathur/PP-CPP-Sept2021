#include <iostream>
using namespace std;

int main() {

	// int a[5] = {1};
	int a[5] = {1, 2, 3};
	cout << sizeof(a) << endl;
	int arr[] = {1, 2, 3, 4, 5, 6}; // We can skip the number of elements, only
	int n = sizeof(arr) / sizeof(int);

	// during initialization

	for (int i = 0 ; i < n ; i++) {
		cout << arr[i] << " ";
	}
	// cout << a[0] << " ";
	// cout << a[1] << " ";
	// cout << a[2] << " ";
	// cout << a[3] << " ";
	// cout << a[4] << " ";
	// cout << a[5] << " ";
	// cout << a[6] << " ";
	// cout << a[.] << " ";
	// cout << a[.] << " ";
	// cout << a[49] << " ";


	cout << endl;
	return 0;
}