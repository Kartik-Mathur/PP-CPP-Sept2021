#include <iostream>
using namespace std;

int fact(int n) {
	// n! = 1*2*3*4*..*n
	int mul = 1;
	for (int i = 1; i <= n ; i++) {
		mul *= i ;
	}
	return mul;
}

int ncr(int n, int r) {
	// n!, (n-r)!, r!
	// int n_fact = fact(n);
	// int nr_fact = fact(n - r);
	// int r_fact = fact(r);

	// int ans = n_fact / (r_fact * nr_fact);
	int ans = fact(n) / (fact(r) * fact(n - r));
	return ans;
}


int main() {

	int n;
	// cin >> n;

	// int ans = fact(n);

	// cout << ans << endl;
	cout << ncr(5, 2) << endl;


	return 0;
}
















