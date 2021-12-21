// CombinationSum3.cpp
class Solution {
public:
	vector<vector<int>> ans;
	void solve(int k, int target, vector<int> &x, int s) {
		// base case
		if (k == 0 and target == 0) {
			ans.push_back(x);
			return;
		}
		if (k == 0 || target == 0) {
			return;
		}

		// recursive case
		for (int i = s ; i <= 9 ; i++) {
			if (i <= target) {
				x.push_back(i);
				solve(k - 1, target - i, x, i + 1);
				x.pop_back();
			}
		}
	}

	vector<vector<int>> combinationSum3(int k, int n) {
		vector<int> x;
		solve(k, n, x, 1);
		return ans;
	}
};