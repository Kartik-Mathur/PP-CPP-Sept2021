// NumberAndString.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	char a[100];

	cin >> n;
	cin.ignore();// or cin.get();
	cin.getline(a, 100);

	cout << "Number: " << n << endl;
	cout << "String: " << a << endl;

	return 0;
}
















