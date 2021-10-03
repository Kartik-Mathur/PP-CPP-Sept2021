// Test.cpp
#include <iostream>
using namespace std;

int main()
{
	int sum1 = 0;
	int n, sum = 0, r;
	cin >> n;
	// n = 46;

	while (n >= 10)
	{
		int x = n;
		sum = 0;
		while (x > 0)
		{
			r = x % 10;
			sum = sum + r;
			x /= 10;
		}
		cout << sum << endl;
		n = sum;
	}

	if (n == 1)
	{
		cout << "UNO";
	}
	else
	{
		cout << "NOT UNO";
	}


	return 0;
}
