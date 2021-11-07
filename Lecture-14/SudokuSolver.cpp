// SudokuSolver.cpp
#include <iostream>
using namespace std;

bool isSafeToPlace(int board[][9], int i, int j, int n, int number) {
	// Check karo row and column mei number nhi hona chahiye
	for (int k = 0 ; k < n ; k++) {
		if (board[i][k] == number || board[k][j] == number) {
			return false;
		}
	}

	// Chota box check krna wha number nhi hona chahiye
	n = sqrt(n);
	int si = (i / n) * n;
	int sj = (j / n) * n;

	for (int i = si ; i < si + n; i++) {
		for (int j = sj ; j < sj + n ; j++) {
			if (board[i][j] == number) {
				return false;
			}
		}
	}

	return true;
}

bool SudokuSolver(int board[][9], int i, int j, int n) {
	// base case
	if (i == n) {
		// Print the sudoku
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0 ; j < n ; j++) {
				cout << board[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}
	// recursive case
	if (j == n) {
		return SudokuSolver(board, i + 1, 0, n);
	}
	// If already filled cell hai toh move to the next cell
	if (board[i][j] != 0) {
		return SudokuSolver(board, i, j + 1, n);
	}
	// Ek empty cell ka kaam krna hai, baaki ka kaam recursion krega
	for (int number = 1 ; number <= n ; number++) {
		if (isSafeToPlace(board, i, j, n, number) == true) {
			// Place the number if its safe to put it
			board[i][j] = number;
			bool kyaBaakiSolveHua = SudokuSolver(board, i, j + 1, n);
			if (kyaBaakiSolveHua == true) {
				return true;
			}
			board[i][j] = 0; // Jo number rakha tha, usse hata dia
			// Backtracking
		}
	}
	return false;
}

int main() {

	int mat[9][9] =
	{	{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
	};
	SudokuSolver(mat, 0, 0, 9);

	return 0;
}
















