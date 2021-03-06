#include <iostream>
using namespace std;

void SpiralPrint(int a[][100], int n, int m) {
	int sr, sc, er = n - 1, ec = m - 1;
	sr = sc = 0;

	while (sr <= er and sc <= ec) {
		// 1. sr from sc to ec
		for (int col = sc; col <= ec; ++col)
		{
			cout << a[sr][col] << " ";
		}
		sr++;
		// 2. ec from sr to er
		for (int row = sr; row <= er; ++row)
		{
			cout << a[row][ec] << " ";
		}
		ec--;

		// 3. er from ec to sc
		if (sr < er) {
			for (int col = ec; col >= sc; --col)
			{
				cout << a[er][col] << " ";
			}
			er--;
		}
		// 4. sc from er to sr
		if (sc < ec) {
			for (int row = er; row >= sr; --row)
			{
				cout << a[row][sc] << " ";
			}
			sc++;
		}
	}
	cout << endl;
}

int main() {

	int a[100][100];
	int n, m;
	int number = 1;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0 ; j < m ; j++) {
			a[i][j] = number++;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0 ; j < m ; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	SpiralPrint(a, n, m);

	return 0;
}
















