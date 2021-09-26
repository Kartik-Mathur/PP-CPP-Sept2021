// break.cpp
#include <iostream>
using namespace std;

int main() {

	int i;
	// break;
	// for (i = 1 ; i <= 10 ; i++) {
	// 	if (i == 5) {
	// 		break;
	// 	}

	// 	cout << i << " ";
	// }
	int x;
	cin >> x;

	cout << "X: " << x << endl;
	i = 1 ;
	while (i <= 5 ) {
		if (i == 3) {
			i++;
			continue;
		}
		cout << i << " ";

		i++;
	}
	cout << endl;

	for (i = 1 ; i <= 5 ; i++) {
		if (i == 3) {
			continue;
		}
		cout << i << " ";
	}

	return 0;
}
















