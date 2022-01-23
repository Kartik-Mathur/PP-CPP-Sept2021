// WineProblem.cpp
#include <iostream>
#include <cstring>
using namespace std;

int WineProblem(int *price, int l, int r, int day) {
	// base case
	if (l > r) {
		return 0;
	}

	// recursive case
	int op1 = price[l] * day + WineProblem(price, l + 1, r, day + 1);
	int op2 = price[r] * day + WineProblem(price, l, r - 1, day + 1);

	return max(op1, op2);
}

int topDown(int *price, int l, int r, int day, int dp[][100]) {
	// base case
	if (l > r) {
		return dp[l][r] = 0;
	}

	if ( dp[l][r] != -1) {
		return  dp[l][r];
	}

	// recursive case
	int op1 = price[l] * day + topDown(price, l + 1, r, day + 1, dp);
	int op2 = price[r] * day + topDown(price, l, r - 1, day + 1, dp);

	return dp[l][r] = max(op1, op2);
}

int bottomUp(int *price, int n) {
	int dp[100][100] = {0};

	for (int i = 0; i < n; ++i)
	{
		dp[i][i] = n * price[i];
	}

	for (int l = n - 2; l >= 0 ; l--) {
		for (int r = 0; r < n; ++r)
		{
			if (r > l) {
				int day = n - (r - l);
				int op1 = day * price[l] + dp[l + 1][r];
				int op2 = day * price[r] + dp[l][r - 1];
				dp[l][r] = max(op1, op2);
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return dp[0][n - 1];
}

int main() {

	int price[] = {2, 3, 5, 1, 4};
	int n = sizeof(price) / sizeof(int);
	int dp[100][100];

	memset(dp, -1, sizeof(dp));

	cout << bottomUp(price, n) << endl;
	cout << topDown(price, 0, n - 1, 1, dp) << endl;
	cout << WineProblem(price, 0, n - 1, 1) << endl;


	return 0;
}
















