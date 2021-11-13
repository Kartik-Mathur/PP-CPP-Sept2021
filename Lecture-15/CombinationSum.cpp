// CombinationSum.cpp
class Solution {
public:
	void solve(vector<int>& candidates, int t, vector<int> &x, int si, vector<vector<int> > &ans) {
		// base case
		if (si == candidates.size() || t < 0) {
			return;
		}

		if (t == 0) {
			ans.push_back(x);
			return;
		}

		// recursive case
		for (int i = si ; i < candidates.size() ; i++) {
			x.push_back(candidates[i]);
			solve(candidates, t - candidates[i], x, i, ans);
			x.pop_back();
		}
	}

	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		vector<vector<int> > ans;
		vector<int> x;
		solve(candidates, target, x, 0, ans);
		return ans;
	}
};