// UserIpCharArray.cpp
#include <iostream>
using namespace std;

void printCharArray(char* a) {
	for (int i = 0; a[i] != '\0'; ++i)
	{
		cout << a[i] << "-";
	}
	cout << endl;
}

int main() {

	char a[100];
	cin >> a;

	printCharArray(a);
	cout << "a: " << a << endl;

	return 0;
}
















