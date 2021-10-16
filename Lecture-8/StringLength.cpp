// StringLength.cpp
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

int main() {

	// char a[] = "Hello World";
	char a[100];
	cin.getline(a, 100);

	int len = Length(a);
	cout << "Length: " << len << endl;

	return 0;
}
















