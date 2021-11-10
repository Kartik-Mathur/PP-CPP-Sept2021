// 2DVector.cpp
#include <iostream>
#include <vector>
using namespace std;
#define pb push_back

int main() {

	// vector<int> v; one d

	int r, c;
	cin >> r >> c;

	vector<vector<int> > v(r);

	for (int i = 0 ; i < r ; i++) {
		for (int j = 0 ; j < c ; j++) {
			int data;
			cin >> data;
			v[i].pb(data);
		}
	}

	for (int i = 0 ; i < r ; i++) {
		for (int j = 0 ; j < c ; j++) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}


	// Inserting in 0th row
	// int row = 0;
	// for (int i = 0 ; i < 50 ; i++) {
	// 	v[row].pb(i + 1);
	// }

	// row = 1;
	// for (int i = 0 ; i < 10 ; i++) {
	// 	v[row].pb(i + 1);
	// }

	// for (int i = 0 ; i < 50 ; i++) {
	// 	cout << v[0][i] << " ";
	// }
	// cout << endl;
	// for (int i = 0 ; i < 10 ; i++) {
	// 	cout << v[1][i] << " ";
	// }
	// cout << endl;



	return 0;
}
















