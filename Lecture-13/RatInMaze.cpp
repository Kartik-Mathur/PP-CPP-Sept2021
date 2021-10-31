// RatInMaze.cpp
#include <iostream>
using namespace std;

bool RatInMaze(char maze[][5], int i, int j, int n, int m, int sol[][100]) {
	// base case
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;
		// Print the solution
		for (int i = 0 ; i < n ; i++) {
			for (int j = 0 ; j < m ; j++) {
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;

		return false;
	}
	// recursive case
	// Assume that the i,j could be the part of solution
	sol[i][j] = 1;

	// 1. Check right se raasta hai
	if (j + 1 < m and maze[i][j + 1] != 'X') {
		bool kyaRightSeBaatBani = RatInMaze(maze, i, j + 1, n, m, sol);
		if (kyaRightSeBaatBani == true) {
			return true;
		}
	}

	// 2. Check neeche se raasta hai
	if (i + 1 < n and maze[i + 1][j] != 'X') {
		bool kyaNeecheSeBaatBani = RatInMaze(maze, i + 1, j, n, m, sol);
		if (kyaNeecheSeBaatBani == true) {
			return true;
		}
	}
	sol[i][j] = 0;
	return false;
}

int main() {

	char maze[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00"
	};

	int sol[100][100] = {0};

	RatInMaze(maze, 0, 0, 4, 4, sol);

	return 0;
}
















