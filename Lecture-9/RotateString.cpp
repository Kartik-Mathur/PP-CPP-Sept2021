#include <iostream>
using namespace std;

int Length(char *a) {
	int i;
	for (i = 0; a[i] != '\0' ; ++i) {

	}
	return i;
}

void rotate(char *a, int k) {

	// 1. Shift all characters by k pos ahead
	int len = Length(a);
	int i = len;
	while (i >= 0) {
		a[i + k] = a[i];
		i--;
	}

	// 2. Bring last k characters to front
	i = len;
	int j = 0;
	while (j < k) {
		a[j] = a[i];
		j++;
		i++;
	}

	// 3. Add Null at the len index
	a[len] = '\0';
	cout << a << endl;
}

int main() {

	char a[] = "Coding";
	int k = 50;

	k %= Length(a);

	rotate(a, k);
	cout << a << endl;

	return 0;
}











