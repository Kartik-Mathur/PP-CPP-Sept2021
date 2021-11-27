// next_permutation.cpp
#include <iostream>
#include <algorithm>
using namespace std;

bool next_permutation1(int *a, int n) {
	int i = n - 2;
	while (i >= 0 and a[i] >= a[i + 1]) {
		i--;
	}

	if (i == -1) {
		// cout << "Not Possible" << endl;
		return false;
	}
	int j = i + 1;
	int k = -1;
	int mx = INT_MAX;
	while (j < n) {
		if ( a[j] < mx and a[j] > a[i]) {
			k = j;
			mx = a[j];
		}
		j++;
	}

	swap(a[i], a[k]);
	sort(a + i + 1, a + n);
	return true;
}

int main() {

	int a[100] = {1, 2, 3};

	int n = 3;

	while (next_permutation1(a, n)) {

		for (int i = 0; i < n; ++i)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}



	// next_permutation(a, a + n);
	// cout << a[0] << " ";
	// cout << a[1] << " ";
	// cout << a[2] << " ";
	// cout << a[3] << " ";
	// cout << a[4] << " ";
	// cout << a[5] << endl;
	// }

	return 0;
}
















