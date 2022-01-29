// Knapsack.cpp
#include <iostream>
#include <cstring>
using namespace std;

int Knapsack(int *price, int *wt, int n, int capacity) {
	// base case
	if (capacity == 0 || n == 0) {
		return 0;
	}

	// recursive case
	int inc, exc;
	inc = exc = INT_MIN;
	if (wt[n - 1] <= capacity) {
		inc = price[n - 1] + Knapsack(price, wt, n - 1, capacity - wt[n - 1]);
	}
	exc = 0 + Knapsack(price, wt, n - 1, capacity);

	return max(inc, exc);
}

int topDown(int *price, int *wt, int n, int capacity, int dp[][100]) {
	// base case
	if (capacity == 0 || n == 0) {
		return dp[capacity][n] = 0;
	}

	if (dp[capacity][n] != -1) {
		return dp[capacity][n];
	}
	// recursive case
	int inc, exc;
	inc = exc = INT_MIN;
	if (wt[n - 1] <= capacity) {
		inc = price[n - 1] + topDown(price, wt, n - 1, capacity - wt[n - 1], dp);
	}
	exc = 0 + topDown(price, wt, n - 1, capacity, dp);

	return dp[capacity][n] = max(inc, exc);
}

int bottomUp(int *price, int *wt, int N, int capacity) {
	int dp[100][100] = {0};

	for (int c = 1 ; c <= capacity ; c++) {
		for (int n = 1 ; n <= N ; n++) {
			int inc, exc;
			inc = exc = INT_MIN;
			if (wt[n - 1] <= c) {
				inc = price[n - 1] + dp[c - wt[n - 1]][n - 1];
			}
			exc = 0 + dp[c][n - 1];
			dp[c][n] = max(inc, exc);
		}
	}

	for (int c = 0 ; c <= capacity ; c++) {
		for (int n = 0 ; n <= N ; n++) {
			cout << dp[c][n] << " ";
		}
		cout << endl;
	}

	return dp[capacity][N];
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int price[] = {4, 5, 10};
	int wt[] = {1, 2, 4};
	int n = sizeof(wt) / sizeof(int);
	int capacity = 4;

	int dp[100][100];
	memset(dp, -1, sizeof(dp));

	cout << bottomUp(price, wt, n, capacity) << endl;
	cout << topDown(price, wt, n, capacity, dp) << endl;
	cout << Knapsack(price, wt, n, capacity) << endl;


	return 0;
}
















