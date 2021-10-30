// Check7.cpp
#include <iostream>
using namespace std;

bool Check7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return false;
	}
	// recursive case
	if (a[i] == 7) {
		return true;
	}

	bool choteMei7Hai = Check7(a, n, i + 1);
	return choteMei7Hai;
}

int first7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return -1;
	}
	// recursive case
	if (a[i] == 7) {
		return i;
	}

	int choteMei7Hai = first7(a, n, i + 1);
	return choteMei7Hai;
}

// Using reference variable
void last7(int *a, int n, int i, int &ans) {
	// base case
	if (i == n) {
		return;
	}

	// recursive case
	if (a[i] == 7) {
		ans = i;
	}

	last7(a, n, i + 1, ans);
}

// using global variable
int indx = -1;
void last7_1(int *a, int n, int i) {
	// base case
	if (i == n) {
		return;
	}

	// recursive case
	if (a[i] == 7) {
		indx = i;
	}

	last7_1(a, n, i + 1);
}

// Finding last7 from last index
int last7_2(int *a, int n) {
	// base case
	if (n == 0) {
		return -1;
	}
	// recursive case
	if (a[n - 1] == 7) {
		return n - 1;
	}

	return last7_2(a, n - 1);
}

int last7_3(int *a, int n, int i) {
	// base case
	if (i == n) {
		return -1;
	}
	// recursive case
	if (a[i] == 7) {
		int chota_i = i;
		int indx = last7_3(a, n, i + 1);
		if (indx == -1) {
			return chota_i;
		}
		else {
			return indx;
		}
	}
	else {
		int indx = last7_3(a, n, i + 1);
		return indx;
	}
}

int main() {

	int a[] = {6, 8, 7, 5, 3, 2, 7, 8, 9, 7, 5, 6, 7, 7, 7};
	int n = sizeof(a) / sizeof(int);

	if (Check7(a, n, 0)) {
		cout << "7 Present" << endl;
	}
	else {
		cout << "7 Not Present" << endl;
	}

	cout << "First index of 7: " << first7(a, n, 0) << endl;

	int ans = -1;
	last7(a, n, 0, ans);
	cout << "Last index of 7: " << ans << endl;

	last7_1(a, n, 0);
	cout << "Last index of 7: " << indx << endl;

	cout << "Last index of 7: " << last7_2(a, n) << endl;
	cout << "Last index of 7: " << last7_3(a, n, 0) << endl;

	return 0;
}
















