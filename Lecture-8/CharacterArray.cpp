// CharacterArray.cpp
#include <iostream>
using namespace std;

int main() {

	// Initialization
	char arr[7] = "Kartik";
	char a[] = {'K', 'A', 'R', 'T', 'I', 'K', '\0'};
	cout << "Name using Loop: ";
	for (int i = 0; a[i] != '\0'; ++i)
	{
		cout << a[i] << "-";
	}
	cout << endl;
	// for (int i = 0; i < 6; ++i)
	// {
	// 	cout << a[i] << " ";
	// }
	// cout << endl;
	cout << "Name using a: ";
	cout << a << endl;
	cout << "Name using arr: ";
	cout << arr << endl;

	return 0;
}
















