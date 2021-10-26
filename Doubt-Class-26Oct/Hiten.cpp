// Jiten.cpp
#include<iostream>
using namespace std;
int main()
{
	int a[100][100], col, row, k;
	cin >> row >> col;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> a[i][j];
		}
	}
	cin >> k;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (a[i][j] == k)
			{
				cout << 1;
				return 0;
			}
		}
	}
	cout << 0;
	return 0;
}