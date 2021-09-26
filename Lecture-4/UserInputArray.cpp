// UserInputArray.cpp
#include <iostream>
using namespace std;

int main() {
	// Things not to do in array
	/*
	int n;
	cin>>n;
	int a[n]; // Not to do this
	*/

	int a[10];
	int n;
	cout << "Enter n(max:10) ";
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}
















