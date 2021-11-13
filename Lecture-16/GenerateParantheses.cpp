// GenerateParantheses.cpp
#include <iostream>
using namespace std;

void GenerateParantheses(int i, char *out, int open, int close, int n) {
	// base case
	if (i == 2 * n) {
		out[i] = '\0';
		cout << out << endl;
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

int main() {

	char a[100];
	int n;
	cin >> n;
	GenerateParantheses(0, a, 0, 0, n);

	return 0;
}
















