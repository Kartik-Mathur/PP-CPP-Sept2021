// Pallindrome.cpp
#include <iostream>
using namespace std;

int Length(char *a) {
	int cnt = 0;
	for (int i = 0; a[i] != '\0'; ++i)
	{
		cnt++;
	}

	return cnt;
}

bool isPallindrome(char *a) {
	int len = Length(a);
	int i = 0, j = len - 1;
	while (i < j) {
		if (a[i] != a[j]) { // not pallidrome
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main() {

	char a[100];
	cin.getline(a, 100);

	if (isPallindrome(a)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}
















