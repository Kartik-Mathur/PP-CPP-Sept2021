// TotalWays.cpp
#include <iostream>
using namespace std;

int bottomUp(int n, int m) {
	int dp[100][100];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0 ; j < m ; j++) {
			if (i == 0 || j == 0) {
				dp[i][j] = 1;
			}
			else {
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0 ; j < m ; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return dp[n - 1][m - 1];
}

int main() {

	int n, m;
	cin >> n >> m;
	cout << bottomUp(n, m) << endl;

	return 0;
}
















