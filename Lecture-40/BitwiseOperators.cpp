// BitwiseOperators.cpp
#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << (5 | 7) << endl;
	cout << (10 | 12) << endl;
	cout << (5 & 7) << endl;
	cout << (10 & 12) << endl;
	cout << (10 ^ 5) << endl;
	cout << (5 ^ 7) << endl;

	return 0;
}
















