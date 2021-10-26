#include <iostream>
using namespace std;

int main() {

	int n, m, k, s;
	char a[100][100];

	cin >> n >> m >> k >> s;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0 ; j < m ; j++) {
			cin >> a[i][j];
		}
	}


	int i, j;
	i = 0, j = 0;
	bool kyapossibleHai = true;
	while (i < n) {
		j = 0;
		while (j < m) {
			if (a[i][j] == '.') {
				s -= 2;
			}
			else if (a[i][j] == '*') {
				s += 5;
			}
			else if (a[i][j] == '#') {
				break;
			}

			j++;
			if (j != m) {
				s -= 1;
			}
			if (s < k) {
				cout << "No";
				// kyapossibleHai = false;
				break;
			}
		}
		if (s < k) {
			break;
		}
		i++;
	}

	if (s >= k) {
		cout << "Yes" << endl;
		cout << s << endl;
	}

	return 0;
}
















