
// vector.cpp
#include <iostream>
using namespace std;

class Vector {
public:
	int *a;
	int n;
	int cs;

	Vector(int s = 2) {
		a = new int[s];
		n = s;
		cs = 0;
	}

	void push_back(int data) {
		if (cs == n) {
			int *olda = a;
			int oldn = n;
			a = new int[2 * n];
			n = 2 * n;
			for (int i = 0; i < oldn; ++i)
			{
				a[i] = olda[i];
			}
			delete []olda;
		}
		a[cs] = data;
		cs++;
	}

	void pop_back() {
		if (cs > 0) {
			cs--;
		}
	}

	int size() {
		return cs;
	}

	int capacity() {
		return n;
	}

	int operator[](int i) {
		return a[i]; // a[i] == *(a+i)
	}

	bool operator>(Vector &X) {
		bool isBig = true;
		for (int i = 0 ; i < cs ; i++) {
			if (a[i] < X[i]) {
				isBig = false;
			}
		}
		return isBig;
	}


};

int main() {

	Vector v, v1;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v1.push_back(0);
	v1.push_back(2);
	v1.push_back(4);


	// for (int i = 0; i < 5; ++i)
	// {
	// 	v.push_back(i);
	// 	cout << "Current Element Inserted : " << i << endl;
	// 	cout << "Current size: " << v.size() << endl;
	// 	cout << "Current capacity: " << v.capacity() << endl;
	// }

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < v1.size(); ++i)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	if (v > v1) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}
















