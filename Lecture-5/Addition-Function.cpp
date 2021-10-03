// Addition - Function.cpp
#include <iostream>
using namespace std;

void Addition(int a, int b) {
	cout << "Sum is " << a + b << endl;
}

void Addition2(int x, int y) {
	cout << "Again Sum is " << x + y << endl;
}

void sub(int a, int b) {
	cout << "Diff is: " << a - b << endl;
}

int diff(int a, int b) {
	// int ans = a - b; // 30 - 20: 10
	// return ans;// We return a value from the function using return ___;
	return a - b;
}

int main() {

	int a = 10;
	int b = 20;

	Addition(a, b);
	Addition2(a, b);

	int x = 30, y = 10;
	// cout << x - y << endl;
	sub(x, y);
	int val = diff(a, b);
	cout << 10 * val + 20 << endl;
	// cout << a + b << endl;

	return 0;
}
















