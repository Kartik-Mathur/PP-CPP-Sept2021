// CheckPrime.cpp
#include <iostream>
using namespace std;

bool isPrime(int n) {

	for (int i = 2 ; i <= n / 2 ; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}


bool isPrime1(int n) {
	// i <= sqrt(n);
	// i*i <= n

	for (int i = 2 ; i * i <= n ; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {

	int n;
	cin >> n;
	if (n > 2) {
		cout << 2 << " ";
	}
	for (int i = 3; i <= n; i += 2) {
		if (isPrime1(i)) {
			cout << i << " ";
		}
	}
	cout << endl;



	return 0;
}
















