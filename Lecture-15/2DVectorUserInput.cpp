// 2DVectorUserInput.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {

	// Initialization of 2D vector
	// Syntax:
	// vector<vector<int> > v(rows,vector<int> (cols)); // Har bucket mei garbage hoga
	// vector<vector<int> > v(rows,vector<int> (cols,value)); // Har bucket mei value hoga
	vector<vector<int> > v(5, vector<int> (6, 10));
	int r = 5, c = 6;
	for (int i = 0 ; i < r ; i++) {
		for (int j = 0 ; j < c ; j++) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}
















