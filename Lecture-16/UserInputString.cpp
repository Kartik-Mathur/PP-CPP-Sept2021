// UserInputString.cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {

	string s;

	// cin >> s;
	getline(cin, s);
	for (int i = 0 ; i < s.size() ; i++) {
		cout << s[i] << "-";
	}
	cout << endl;

	cout << s << endl;

	return 0;
}
















