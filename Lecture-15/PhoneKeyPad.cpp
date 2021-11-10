// PhoneKeyPad.cpp
#include <iostream>
using namespace std;

char keys[][10] = {
	"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
};

void PhoneKeyPad(char *in, char* out, int i, int j) {
	// base case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}
	// recursive case
	char ch = in[i];
	int indx = ch - '0';
	for (int k = 0 ; keys[indx][k] != '\0' ; k++) {
		// cout << keys[indx][j] << endl;
		out[j] = keys[indx][k];
		PhoneKeyPad(in, out, i + 1, j + 1);
	}
}

int main() {

	char in[100], out[100];
	cin >> in;

	PhoneKeyPad(in, out, 0, 0);



	return 0;
}
















