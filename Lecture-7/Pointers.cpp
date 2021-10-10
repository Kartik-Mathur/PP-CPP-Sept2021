// Pointers.cpp
#include <iostream>
using namespace std;

int main() {

	int a = 10;
	int *aptr; // NULL==0

	cout << a << endl;
	cout << a + 1 << endl;

	cout << *aptr << endl;
	cout << *aptr + 1 << endl;
	cout << "Size: " << sizeof(aptr) << endl;
	cout << "Size: " << sizeof(&a) << endl;

	// float f = 10.11;
	// float *fptr = &f;

	// char a = 'A';
	// char* aptr = &a;

	// cout << "a: " << a << endl;
	// cout << "aptr: " << (int*)aptr << endl;
	// cout << "&a: " << (void*)&a << endl;

	// cout << "a: " << a << endl;
	// cout << "*aptr: " << *aptr << endl;
	// cout << "*(&a): " << *(&a) << endl;


	return 0;
}
















