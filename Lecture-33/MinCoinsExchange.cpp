// MinCoinsExchange.cpp
#include <iostream>
#include <vector>
#include <cstring> // memset
using namespace std;

int coinChange(int amt, int deno[], int n) {
	// base case
	if (amt == 0)
	{
		return 0;
	}

	// recursive case
	int ans = INT_MAX;
	for (int i = 0; i < n ; ++i)
	{
		if (amt >= deno[i]) {
			int chotiAmount = amt - deno[i];
			int chotiAmountKeSikke = coinChange(chotiAmount, deno, n);
			if (chotiAmountKeSikke != INT_MAX) {
				ans = min(ans, chotiAmountKeSikke + 1);
			}
		}
	}

	return ans;
}

int topDown(int amt, int *deno, int n, int *dp) {
	// base case
	if (amt == 0)
	{
		return dp[amt] = 0;
	}

	if ( dp[amt] != -1) {
		return dp[amt];
	}

	// recursive case
	int ans = INT_MAX;
	for (int i = 0; i < n ; ++i)
	{
		if (amt >= deno[i]) {
			int chotiAmount = amt - deno[i];
			int chotiAmountKeSikke = topDown(chotiAmount, deno, n, dp);
			if (chotiAmountKeSikke != INT_MAX) {
				ans = min(ans, chotiAmountKeSikke + 1);
			}
		}
	}

	return dp[amt] = ans;
}

int bottomUp(int amt, int *deno, int n) {

	vector<int> dp(amt + 1, INT_MAX);
	dp[0] = 0;

	for (int rupay = 0; rupay <= amt; ++rupay)
	{
		for (int i = 0; i < n; ++i)
		{
			if (rupay >= deno[i]) {
				int cr = rupay - deno[i];
				if (dp[cr] != INT_MAX) {
					dp[rupay] = min(dp[rupay], dp[cr] + 1);
				}
			}
		}
	}

	return dp[amt];
}

int main() {

	int amt;
	// amt = 10;
	cin >> amt;
	int deno[] = {1, 7, 10};
	int n = sizeof(deno) / sizeof(int);


	int dp[10010];
	memset(dp, -1, sizeof(dp));


	cout << "TopDown: " << topDown(amt, deno, n, dp) << endl;
	int ans = bottomUp(amt, deno, n);
	cout << "BottomUp: " << ans << endl;
	cout << "Recursion: " << coinChange(amt, deno, n) << endl;


	return 0;
}
















