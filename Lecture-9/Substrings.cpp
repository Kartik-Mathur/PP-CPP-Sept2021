#include <iostream>
#include <cstring>
using namespace std;

void printSubStrings(char *a) {
	int len = strlen(a);
	for (int i = 0; i < len; ++i) {
		for (int j = i ; j < len ; j++) {
			for (int k = i ; k <= j ; k++) {
				cout << a[k];
			}
			cout << endl;
		}
	}
}

int main() {

	char a[] = "abcd";

	printSubStrings(a);

	return 0;
}
















