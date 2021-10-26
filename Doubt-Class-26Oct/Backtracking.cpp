// Backtracking.cpp
#include <iostream>
using namespace std;
bool ratinmaze(char maze[10][10], int m, int n, int i, int j, int path[10][10])
{
	//Base case
	if (i == m - 1 && j == n - 1)
	{	path[i][j] = 1;
		//Print array
		for (int a = 0; a < m; a++)
		{
			for (int b = 0; b < n; b++)
			{
				cout << path[a][b] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return true;
	}
	//Rat in the maze
	if (i > m - 1 || j > n - 1)
	{
		return false;
	}
	if (maze[i][j] == 'X')
	{
		return false;
	}
	path[i][j] = 1;
	bool rightmove = ratinmaze(maze, m, n, i, j + 1, path);
	bool downmove = ratinmaze(maze, m, n, i + 1, j, path);
	path[i][j] = 0;
	if (rightmove == true || downmove == true)
	{
		return true;
	}
	return false;
}
int main() {
	char maze[10][10] = {"0000", "00X0", "00X0", "XX00"};
	int path[10][10] = {0};
	ratinmaze(maze, 4, 4, 0, 0, path);
}