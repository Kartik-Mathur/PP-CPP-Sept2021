// AppendStrings.cpp
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

void append(char*a, char* b) {
	int i = Length(a);
	int j = 0;

	int lenb = Length(b);

	while (j <= lenb) {
		a[i++] = b[j++];
	}
}

int main() {

	char a[100] = "Hi";
	char b[] = "There";

	cout << "a: " << a << endl;
	append(a, b);
	cout << "a: " << a << endl;




	return 0;
}
















