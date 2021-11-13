// UserInputVector.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> v;

	v.resize(n); // After resize we can use vector like a normal array

	for (int i = 0 ; i < n ; i++) {
		cin >> v[i];
		cout << "Capacity " << v.capacity() << endl;
	}

	for (int i = 0 ; i < n ; i++) {
		cout << v[i] << " ";
	}
	cout << endl;


	v.push_back(n + 1);
	cout << "Capacity " << v.capacity() << endl;

	for (int i = 0 ; i < n + 1 ; i++) {
		cout << v[i] << " ";
	}
	cout << endl;


	return 0;
}
















