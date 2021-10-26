// HelpRamu.cpp
#include <iostream>
using namespace std;

int main() {

	int c_singleRide, c_Single_UnlimRide, c_RorC, c_RandC;
	int r, c;
	int a[1000], b[1000];

	int t;
	cin >> t;
	while (t > 0) {

		cin >> c_singleRide >> c_Single_UnlimRide >> c_RorC >> c_RandC;
		cin >> r >> c;
		for (int i = 0; i < r; ++i)
		{
			cin >> a[i];
		}

		for (int i = 0; i < c; ++i)
		{
			cin >> b[i];
		}

		// Finding the minimum cost for all rickshaws
		int rickshaws_cost = 0;
		int op1 = 0;
		for (int i = 0; i < r; ++i)
		{
			op1 += min(c_Single_UnlimRide, a[i] * c_singleRide);
		}
		rickshaws_cost = min(op1, c_RorC);


		// Finding the minimum cost for all cabs
		int cab_cost = 0;
		int op2 = 0;
		for (int i = 0; i < c; ++i)
		{
			op2 += min(c_Single_UnlimRide, b[i] * c_singleRide);
		}
		cab_cost = min(op2, c_RorC);

		int ans = min(rickshaws_cost + cab_cost, c_RandC);

		cout << ans << endl;


		t--;
	}


	return 0;
}
















