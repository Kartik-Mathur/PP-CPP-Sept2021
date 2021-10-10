#include <iostream>
using namespace std;

int main() {

	int a = 10;
	double b = 10.11;
	char ch = 'A';
	int arr[] = {1, 2, 3, 4};

	// int &x = a; // Reference variable
	// int x = &a;// Incorrect, Aisa exist nhi krta

	cout << "Address of arr: " << arr << endl;
	cout << "Address of a: " << &a << endl;
	cout << "Address of a+1: " << &a + 1 << endl;
	cout << "Address of b: " << &b << endl;

	return 0;
}
















