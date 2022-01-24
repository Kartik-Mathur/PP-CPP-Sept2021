// LCS.cpp
#include <iostream>
#include <cstring>
using namespace std;

int LCS(char *s1, char *s2, int i, int j) {
	// base case
	if (s1[i] == '\0' || s2[j] == '\0') {
		return 0;
	}

	// recursive case
	if (s1[i] != s2[j]) {
		int op1 = LCS(s1, s2, i + 1, j);
		int op2 = LCS(s1, s2, i, j + 1);

		return max(op1, op2);
	}
	else {
		return 1 + LCS(s1, s2, i + 1, j + 1);
	}
}

int topDown(char *s1, char *s2, int i, int j, int dp[][100]) {
	// base case
	if (s1[i] == '\0' || s2[j] == '\0') {
		return dp[i][j] = 0;
	}

	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	// recursive case
	if (s1[i] != s2[j]) {
		int op1 = topDown(s1, s2, i + 1, j, dp);
		int op2 = topDown(s1, s2, i, j + 1, dp);

		return dp[i][j] = max(op1, op2);
	}
	else {
		return dp[i][j] = 1 + topDown(s1, s2, i + 1, j + 1, dp);
	}
}

int bottomUp(char *s1, char *s2) {
	int dp[100][100] = {0};
	int n = strlen(s1);
	int m = strlen(s2);

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if (s1[i - 1] == s2[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
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

	char a[] = "abce";
	char b[] = "ace";

	int dp[100][100];
	memset(dp, -1, sizeof dp);

	cout << bottomUp(a, b) << endl;
	cout << topDown(a, b, 0, 0, dp) << endl;
	cout << LCS(a, b, 0, 0) << endl;


	return 0;
}
















