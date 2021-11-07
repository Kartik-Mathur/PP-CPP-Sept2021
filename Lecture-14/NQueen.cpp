#include <iostream>
using namespace std;

bool isSafeToPlace(int board[][100], int i, int j, int n) {
	// check row
	for (int k = 0; k < n; ++k)
	{
		if (board[i][k] == 1 || board[k][j] == 1)
		{
			return false;
		}
	}

	// check upper right diagonal
	int x = i, y = j;
	while (i >= 0 and j < n) {
		if (board[i][j])
		{
			return false;
		}
		i--;
		j++;
	}

	// check upper left diagonal
	while (x >= 0 and y >= 0) {
		if (board[x][y]) {
			return false;
		}

		x--;
		y--;
	}
	return true;
}

bool Nqueen(int board[][100], int i, int n) {
	// base case
	if (i == n) {
		// Print the board
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				// cout << board[i][j] << " ";
				board[i][j] == 1 ? cout << "Q " : cout << "_ ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}

	// Recursive case
	for (int j = 0; j < n; ++j)
	{
		if (isSafeToPlace(board, i, j, n)) {
			board[i][j] = 1; // Queen ko place kro
			bool kyaBaakiPlaceHui = Nqueen(board, i + 1, n);
			if (kyaBaakiPlaceHui == true)
			{
				return true;
			}
			board[i][j] = 0; // Queen ko hata do, Backtracking
		}
	}

	// ith row mei, kisi bhi column par queen place nhi ho paai
	return false;
}


int main() {

	int board[100][100] = {0};
	int n;
	cin >> n;
	Nqueen(board, 0, n);

	return 0;
}
















