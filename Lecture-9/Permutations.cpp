// Permutations.cpp
#include <iostream>
using namespace std;

bool Permutations(char *a, char *b) {
	int freq[26] = {0};

	for (int i = 0; a[i] != '\0' ; ++i)
	{
		char ch = a[i];
		int indx = ch - 'a';
		freq[indx]++;
	}

	for (int i = 0; i < 26; ++i)
	{
		cout << freq[i] << " ";
	}
	cout << endl;
	for (int i = 0; b[i] != '\0' ; ++i)
	{
		char ch = b[i];
		int indx = ch - 'a';
		freq[indx]--;
	}

	for (int i = 0; i < 26; ++i)
	{
		// cout << freq[i] << " ";
		if (freq[i] != 0) {
			return false;
		}
	}
	return true;
}

int main() {

	char a[] = "abcbazyx";
	char b[] = "cbabaxyz";

	bool ans = Permutations(a, b);
	if (ans == true) {
		cout << "Permutations" << endl;
	}
	else {
		cout << "Not Permutations" << endl;
	}


	return 0;
}
















