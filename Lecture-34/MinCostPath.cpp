// MinCostPath.cpp
#include <iostream>
using namespace std;

int bottomUp(int cost[][4], int n, int m) {
	int dp[100][100] = {0};
	dp[0][0] = cost[0][0];
	// Fill the 0th row
	for (int j = 1 ; j < m ; j++) {
		dp[0][j] = cost[0][j] + dp[0][j - 1];
	}

	// Fill the 0th Column
	for (int i = 1; i < n; ++i)
	{
		dp[i][0] = 	cost[i][0] + dp[i - 1][0];
	}

	for (int i = 1; i < n; ++i)
	{
		for (int j = 1; j < m ; j++) {
			dp[i][j] = cost[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m ; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	return dp[n - 1][m - 1];
}

int main() {

	int cost[][4] = {
		{1, 1, 5, 2},
		{4, 1, 1, 3},
		{2, 2, 1, 1},
		{3, 4, 6, 1}
	};

	cout << bottomUp(cost, 4, 4) << endl;


	return 0;
}
















