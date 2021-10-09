// Transform.cpp
// Given an initial array arr, every day you produce a new array using
// the array of the previous day.

// On the i-th day, you do the following operations on the array of day i-1 to
// produce the array of day i:

// - If an element is smaller than both its left neighbor and its right neighbor,
//   then this element is incremented.
// - If an element is bigger than both its left neighbor and its right neighbor,
//   then this element is decremented.

// The first and last elements never change.
// Example:
// Input: arr = [6,2,3,4]
// Output: [6,3,3,4]

// Input: arr = [1,6,3,4,3,5]
// Output: [1,4,4,4,4,5]

#include <iostream>
using namespace std;

int main() {
	int a[] = {1, 6, 3, 4, 3, 5};
	int n = sizeof(a) / sizeof(int);

	bool change = true;

	while (change == true) {
		change = false;
		for (int i = 1 ; i < n - 1; i++) {
			if (a[i] > a[i - 1] and a[i] > a[i + 1]) {
				a[i]--;
				change = true;
			}
			else if (a[i] < a[i - 1] and a[i] < a[i + 1]) {
				a[i]++;
				change = true;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;



	return 0;
}










































