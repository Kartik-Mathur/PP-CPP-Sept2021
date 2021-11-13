// PallindromePartitioning.cpp
class Solution {
public:
	vector<vector<string>> ans;
	bool isPallindrome(string s, int i, int j) {
		while (i < j) {
			if (s[i] != s[j]) {
				return false;
			}
			i++;
			j--;
		}
		return true;
	}
	void solve(string s, int i, vector<string> &v) {
		// base case
		if (i == s.length()) {
			ans.push_back(v);
			return;
		}
		if (i > s.length()) {
			return;
		}

		// recursive case
		for (int j = i ; j < s.length() ; j++) {
			string x = s.substr(i, j - i + 1);
			if (isPallindrome(x, 0, x.size() - 1)) {
				v.push_back(x);
				solve(s, j + 1, v);
				v.pop_back();
			}
		}
	}

	vector<vector<string>> partition(string s) {
		vector<string> v;
		solve(s, 0, v);
		return ans;
	}
};