// SimpleInterest.cpp
#include <iostream> // Input output, cin and cout
using namespace std;

int main() { // starting point of the program

	int p, r, t;
	cin >> p >> r >> t;

	float si; //
	si = (p * r * t) / 100.0;

	cout << "Simple Interest: " << si << '\n';

	return 0; // Exit
}