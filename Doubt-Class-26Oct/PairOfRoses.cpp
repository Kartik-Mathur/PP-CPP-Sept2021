// PairOfRoses.cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int t;
	cin >> t;
	int a[100000];
	while (t > 0) {
		int n;
		cin >> n;


		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		int money;
		cin >> money;

		sort(a, a + n);

		int i = 0, j = n - 1;
		int r1, r2;
		while (i < j) {
			if (a[i] + a[j] > money) {
				j--;
			}
			else if (a[i] + a[j] == money) {
				r1 = a[i];
				r2 = a[j];
				j--;
			}
			else {
				i++;
			}
		}

		cout << "Deepak should buy roses whose prices are " << r1 << " and " << r2 << "." << endl;


		t--;
	}


	return 0;
}
















