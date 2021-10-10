// PassByRefPointers.cpp
#include <iostream>
using namespace std;

void update(int *x) {
	*x = *x + 1;
	// *aptr = *aptr + 1;
}

int main() {

	int a = 10;
	int *aptr = &a;

	cout << "a: " << a << endl;
	update(aptr);
	cout << "a: " << a << endl;
	update(&a);
	cout << "a: " << a << endl;

	return 0;
}
















