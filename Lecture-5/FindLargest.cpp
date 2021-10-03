#include <iostream>
#include <climits>
using namespace std;

int main() {
	int a[] = { -2, -5, -1, -4, -3};
	int n = sizeof(a) / sizeof(int);

	int mx = INT_MIN;// Maximum value iske andar aaegi
	for (int i = 0 ; i < n ; i++) {
		if (a[i] > mx) {
			mx = a[i];
		}
	}

	cout << "Maximum Value is: " << mx << endl;

	return 0;
}
















