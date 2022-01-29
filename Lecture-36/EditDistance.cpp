// EditDistance.cpp
#include <iostream>
using namespace std;

int EditDistance(char *a, char *b, int i, int j) {
	// base case
	if (i == 0) {
		return j;
	}
	if (j == 0) {
		return i;
	}

	// recursive case
	if (a[i - 1] == b[j - 1]) {
		return EditDistance(a, b, i - 1, j - 1);
	}
	else {
		int op1 = EditDistance(a, b, i - 1, j);
		int op2 = EditDistance(a, b, i, j - 1);
		int op3 = EditDistance(a, b, i - 1, j - 1);
		return 1 + min(op1, min(op2, op3));
	}
}

int topDown(char *a, char *b, int i, int j, int dp[][100]) {
	// base case
	if (i == 0) {
		return dp[i][j] = j;
	}
	if (j == 0) {
		return dp[i][j] = i;
	}

	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	// recursive case
	if (a[i - 1] == b[j - 1]) {
		return dp[i][j] = topDown(a, b, i - 1, j - 1, dp);
	}
	else {
		int op1 = topDown(a, b, i - 1, j, dp);
		int op2 = topDown(a, b, i, j - 1, dp);
		int op3 = topDown(a, b, i - 1, j - 1, dp);
		return dp[i][j] = 1 + min(op1, min(op2, op3));
	}
}

int bottomUp(char *a, char *b) {
	int n = strlen(a);
	int m = strlen(b);

	int dp[100][100] = {0};

	for (int j = 1; j <= m ; ++j)
	{
		dp[0][j] = j;
	}

	for (int i = 1; i <= n; ++i)
	{
		dp[i][0] = i;
	}

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1 ; j <= m ; j++) {
			if (a[i - 1] == b[j - 1]) {
				dp[i][j]  = dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = 1 + min(dp[i - 1][j],
				                   min(dp[i][j - 1], dp[i - 1][j - 1])
				                  );
			}
		}
	}

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	return dp[n][m];
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char a[] = "Sun";
	char b[] = "Satur";
	int n = strlen(a);
	int m = strlen(b);

	int dp[100][100];
	memset(dp, -1, sizeof dp);

	cout << topDown(a, b, n, m, dp) << endl;
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << bottomUp(a, b) << endl;
	cout << EditDistance(a, b, n, m) << endl;

	return 0;
}
















