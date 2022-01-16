// FiboDp.cpp
#include <iostream>
using namespace std;

int topDown(int n, int *dp) {
	if (n == 0 || n == 1) {
		return dp[n] = n;
	}

	if (dp[n] != -1) {
		return dp[n];
	}

	return dp[n] = topDown(n - 1, dp) + topDown(n - 2, dp);
}

int bottomUp(int n) {

	int *dp = new int[n + 1];

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	return dp[n];
}

int main() {

	int dp[10000];
	for (int i = 0; i < 10000; ++i)
	{
		dp[i] = -1;
	}

	int n;
	cin >> n;
	cout << topDown(n, dp) << endl;
	cout << bottomUp(n) << endl;


	return 0;
}
















