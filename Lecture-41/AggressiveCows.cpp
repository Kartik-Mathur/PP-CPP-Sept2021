// AggressiveCows.cpp
#include <iostream>
#include <algorithm>
using namespace std;
#define FOR(a,n) for(int i = 0 ; i < n ; i++){cin>>a[i];}
#define ll long long

bool KyaPossibleHai(ll *stalls, ll n, ll cows, ll dist) {
	ll pc = 1;
	ll i_pc = 0;
	for (int i = 1; i < n; ++i)
	{
		if (stalls[i] - stalls[i_pc] >= dist) {
			pc++;
			i_pc = i;
			if (pc == cows) {
				return true;
			}
		}
	}
	return false;
}

ll solve(ll *stalls, ll n, ll cows) {

	ll end = stalls[n - 1] - stalls[0];
	ll start = 0;
	ll ans = -1;
	while (start <= end) {

		ll mid = (start + end) / 2;
		if (KyaPossibleHai(stalls, n, cows, mid)) {
			ans = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	return ans;
}

int main() {

	ll n, cows;
	ll stalls[100000];

	cin >> n >> cows;
	FOR(stalls, n);
	sort(stalls, stalls + n);

	cout << solve(stalls, n, cows) << endl;


	return 0;
}
















