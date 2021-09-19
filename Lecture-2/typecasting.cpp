// typecasting.cpp
#include <iostream>
using namespace std;

int main() {

	int a = 10;
	float f = 1.11;
	char ch = 'a';

	char ch1 = ch + 1;
	char ch2 = 99;

	int b = 'c';
	cout << b << endl;

	for (int i = 97 ; i <= 122; i++ ) {
		ch = i;
		cout << ch << " ";
	}
	cout << endl;
	cout << ch2 << endl;
	cout << ch1 << endl;
	cout << ch + 0 << endl;
	cout << a + f << endl;
	cout << a + a << endl;
	cout << f + f << endl;



	return 0;
}
















