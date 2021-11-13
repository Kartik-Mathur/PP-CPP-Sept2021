// GenerateParantesis.cpp
class Solution {
public:
	vector<string> ans;
	void GenerateParantheses(int i, char *out, int open, int close, int n) {
		// base case
		if (i == 2 * n) {
			out[i] = '\0';
			// cout << out << endl;
			string x(out);
			ans.push_back(x);
			return;
		}

		if (open > close) {
			// Add ')'
			out[i] = ')';
			GenerateParantheses(i + 1, out, open, close + 1, n);
		}
		if (open < n) {
			out[i] = '(';
			GenerateParantheses(i + 1, out, open + 1, close, n);
		}
	}
	vector<string> generateParenthesis(int n) {
		char out[1000];
		GenerateParantheses(0, out, 0, 0, n);
		return ans;
	}
};