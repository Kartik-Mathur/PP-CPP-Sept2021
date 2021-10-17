// Test.cpp
#include <iostream>
using namespace std;

int main() {

	int a[10000];
	int n;
	cin >> n;

	int b[10000];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		int indx = i;
		int val = a[i];
		b[val] = indx;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << b[i] << " ";
	}


	return 0;
}
















