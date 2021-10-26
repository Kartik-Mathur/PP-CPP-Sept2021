// Paridhi.cpp
#include <iostream>
using namespace std;

void pr(int a[], int ra, int mwd)
{
	for (int m = 0; m < ra; m++)
	{
		for (int n = 0; n < ra; n++)
		{
			if (a[m] + a[n] == mwd && a[m] <= a[n])
			{
				cout << "Deepak should buy roses whose prices are " << a[m] << " and " << a[n] << "\n";
			}

		}
	}

}

int main()
{
	int tcase, ra, mwd;
	int a[100];

	cin >> tcase;

	int i = 0;
	while (i < tcase)
	{
		cin >> ra;
		for (int j = 0; j < ra; j++)
		{
			cin >> a[j];
		}
		cin >> mwd;
		cout << endl;
		i++;

	}

	pr(a, ra, mwd);

	return 0;
}