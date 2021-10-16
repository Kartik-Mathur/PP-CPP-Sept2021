// CharArrayInput.cpp
#include <iostream>
using namespace std;

void printCharArray(char* a) {
	for (int i = 0; a[i] != '\0'; ++i)
	{
		cout << a[i] << "-";
	}
	cout << endl;
}

void userIp(char* a, char delimiter = '\n') {
	int i = 0;
	char ch = cin.get();

	while (ch != delimiter) {
		a[i++] = ch;
		ch = cin.get();
	}
	a[i] = '\0';
}

int main() {

	char a[100];
	// cin >> a; // cin ignores whitespaces

	// Syntax: cin.getline(array, size, delimiter);
	cin.getline(a, 10); // By default delimiter is '\n'
	// cin.getline(a, 100, '$'); // By default delimiter is '\n'
	// userIp(a, '$');
	cout << "a: " << a << endl;
	printCharArray(a);


	return 0;
}
















