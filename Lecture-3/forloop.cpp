// forloop.cpp
#include <iostream>
using namespace std;

int main() {

	int i = 1;
	while (i <= 10) {
		cout << i << " ";

		i++;
	}

	cout << endl;

	for (i = 1; i <= 10; i++) {
		cout << i << " ";
	}
	cout << endl;
	i = 1;
	for (; i <= 10;) {
		cout << i << " ";


		i++;
	}
	return 0;
}
















