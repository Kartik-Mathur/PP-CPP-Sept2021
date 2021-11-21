// AsciiSubsequence.cpp
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

void reverse(int &x) {
	int ans = 0;
	while (x > 0) {
		ans = ans * 10 + x % 10;
		x /= 10;
	}
	x = ans;
}

void AsciiSubsequence(char *in, char *out, int i, int j) {
	// base case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << " ";
		return;
	}

	// recursive case
	// 1. ith character ko mat lo
	AsciiSubsequence(in, out, i + 1, j);
	// 2. ith character ko lelo
	out[j] = in[i];
	AsciiSubsequence(in, out, i + 1, j + 1);
	// 3. ith character ke ascii code ko lelo
	int ascii_code = in[i];
	reverse(ascii_code);
	int k = j;
	while (ascii_code > 0) {
		int digit = ascii_code % 10;
		char ch = digit + '0';
		out[k] = ch;
		k++;
		ascii_code /= 10;
	}
	AsciiSubsequence(in, out, i + 1, k);
}

int main() {

	char in[100], out[100];

	cin >> in;
	int n = strlen(in);
	AsciiSubsequence(in, out, 0, 0);
	cout << endl << pow(3, n);
	return 0;
}
















