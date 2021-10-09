#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, 2, 1, 3, -1, -2, 0};
	int n = sizeof(a) / sizeof(int);
	int j;
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 1; i < n; ++i)
	{
		int picked_card = a[i];
		for (j = i - 1 ; j >= 0 && picked_card < a[j] ; j--) {
			a[j + 1] = a[j];
		}
		// for (j = i - 1 ; j >= 0 ; j--) {
		// 	if (picked_card < a[j]) {
		// 		a[j + 1] = a[j];
		// 	}
		// 	else {
		// 		break;
		// 	}
		// }

		a[j + 1] = picked_card;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;





	return 0;
}
















