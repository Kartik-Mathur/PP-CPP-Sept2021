#include <iostream>
#include <vector>
using namespace std;

int length(int x) {
	int len = 0;
	while (x > 0) {
		len++;
		x /= 10;
	}
	return len;
}

void addToArray(int* in, int len, int x) {
	int k = len - 1;
	while (x > 0) {
		int digit = x % 10;
		in[k--] = digit;
		x /= 10;
	}
}

vector<string> ans;

void stringCodes(int *in, char* out, int n, int i = 0, int j = 0) {
	if (i == n) {
		out[j] = '\0';
		// cout << out << endl;
		string s(out);
		ans.push_back(out);
		return;
	}

	int no1 = in[i];
	char ch = 'a' + no1 - 1;
	out[j] = ch;
	stringCodes(in, out, n, i + 1, j + 1);

	if (i < n and i + 1 < n) {
		int no2 = in[i] * 10 + in[i + 1];
		if (no2 <= 26) {
			char ch = 'a' + no2 - 1;
			out[j] = ch;
			stringCodes(in, out, n, i + 2, j + 1);
		}
	}
}



int main() {

	int in[100];
	char out[1000];
	int n, no;

	cin >> no;
	n = length(no);
	addToArray(in, n, no);
	stringCodes(in, out, n);

	cout << "[";
	for (int i = 0 ; i < ans.size(); i++) {
		cout << ans[i];
		if (i != ans.size() - 1) {
			cout << ", ";
		}
	}
	cout << "]";
	return 0;
}
















