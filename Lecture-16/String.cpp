#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// Initialization
	// 1st way
	// string x = "Hello";
	// // 2nd way
	// char a[] = "Hello Saurabh!";
	// string y(a);

	// cout << x << endl;
	// cout << "Length of x: " << x.length() << endl;

	// cout << y << endl;
	// cout << "Length of y: " << y.size() << endl;


	// // 3rd way
	// char b[] = "Hello Rishabh!";
	// string z = b;
	// cout << z << endl;
	// cout << "Length of z: " << z.size() << endl;


	// Alternative to character array
	string s;

	s = "Hello World"; // Assignment
	cout << s << endl;
	cout << s.substr(1, 3) << endl;
	cout << s.substr(1) << endl;

	s.push_back('!');
	s.push_back('!');
	cout << s << endl;

	s.pop_back();
	s.pop_back();
	// s.pop_back();
	cout << s << endl;

	// s = s + ", Learning Strings";
	s += ", We are learning strings";
	cout << s << endl;

	// s = "Saurabh C++";
	// cout << s << endl;

	return 0;
}
















