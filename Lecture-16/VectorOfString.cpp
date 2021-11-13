// VectorOfString.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> v;

	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		string x;
		getline(cin, x);
		v.push_back(x);
	}

	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << endl;
	}


	return 0;
}
















