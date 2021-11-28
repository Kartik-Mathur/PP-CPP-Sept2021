// PrimeSieve.cpp
#include <iostream>
using namespace std;


void PrimeSieve(int n) {
	bool *b = new bool[n + 1];
	for (int i = 0; i < n + 1; ++i)
	{
		b[i] = true;
	} //n
	// Algorithm for sieve
	for (int no = 2; no < n + 1; ++no)
	{
		if (b[no] == true) {
			for (int i = 2 * no; i <= n; i = i + no)
			{
				b[i] = false;
			}
		}
	} // n*(log(log(n)))

	// All those buckets that have value true they are prime
	for (int i = 2; i < n + 1; ++i)
	{
		if (b[i]) {
			cout << i << " ";
		}
	}
	cout << endl;

}

int main() {
	int n;
	cin >> n;
	PrimeSieve(n);


	return 0;
}
















