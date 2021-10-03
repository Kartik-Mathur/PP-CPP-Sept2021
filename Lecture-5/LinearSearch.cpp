// LinearSearch.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {2, 5, 1, 4, 3};
	int n = sizeof(a) / sizeof(int);
	int key = 4;

	for (int i = 0 ; i < n ; i++) {
		if (a[i] == key) {
			cout << "Key is present at " << i << endl;
			break;
		}
	}



	return 0;
}
















