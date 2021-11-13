// BreakingStringIntoParts.cpp
#include <iostream>
using namespace std;

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

int main() {

	string s = "abac";

	int i = 0;
	for (int j = i ; j < s.size() ; j++) {
		cout << s.substr(i, (j - i + 1)) << " : ";
		if (isPallindrome(s.substr(i, (j - i + 1)), i, j)) {
			cout << "Pallindrome hai";
		}
		cout << endl;
	}

	return 0;
}
















