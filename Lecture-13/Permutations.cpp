// Permutations.cpp
#include <iostream>
using namespace std;

void Permutations(char *a, int i) {
	// base case
	if (a[i] == '\0') {
		cout << a << endl;
		return;
	}

	for (int j = i ; a[j] != '\0'; j++) {
		// Bring every character to the ith index
		swap(a[j], a[i]);
		// Then keeping the ith character fix, ask the recursion to do the work for
		// the smaller string(i+1)
		Permutations(a, i + 1);
		// Backtracking, when we swapped the ith and jth character
		// We should revert that back else the original array will change..
		swap(a[i], a[j]);
	}
}

int main() {

	char a[] = "abc";

	// int i = 0;
	Permutations(a, 0);


	return 0;
}
















