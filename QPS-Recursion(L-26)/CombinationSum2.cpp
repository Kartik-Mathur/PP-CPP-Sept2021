// CombinationSum2.cpp
class Solution {
public:
	vector<vector<int>> ans;
	void solve(vector<int>& c, int t, vector<int> &x, int s) {
		// base case
		if (t == 0) {
			ans.push_back(x);
			return;
		}
		if (s == c.size()) {
			return;
		}

		// recursive case
		for (int i = s; i < c.size() ; i++) {
			if (i != s and c[i] == c[i - 1]) {
				continue;
			}
			if (c[i] <= t) {
				x.push_back(c[i]);
				solve(c, t - c[i], x, i + 1);
				x.pop_back();
			}
		}
	}
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		vector<int> x;
		sort(candidates.begin(), candidates.end());
		solve(candidates, target, x, 0);
		return ans;
	}
};