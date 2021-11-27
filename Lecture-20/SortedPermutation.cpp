// SortedPermutation.cpp
#include <iostream>
using namespace std;

string x;
void SortedPermutation(string s, int i, string ans) {
	if (i == s.length()) {
		if (ans > x) {
			cout << ans << endl;
		}
		return;
	}

	// recursive case
	for (int i = 0; i < s.length(); ++i)
	{
		string choti = s.substr(0, i) + s.substr(i + 1);

		ans.push_back(s[i]);
		SortedPermutation(choti, 0, ans);
		ans.pop_back();
	}
}

int main() {

	string s;
	cin >> s;
	x = s;

	string ans;
	sort(s.begin(), s.end());
	SortedPermutation(s, 0, ans);
	// cout << s << endl;

	return 0;
}
















