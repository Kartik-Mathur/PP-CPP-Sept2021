// LargestString.cpp
#include <iostream>
using namespace std;

int Length(char *a) {
	int cnt = 0;
	for (int i = 0; a[i] != '\0'; ++i)
	{
		cnt++;
	}

	return cnt;
}

void Update(char* a, char *b) {
	// b ko a ke andar copy krdo
	int len = Length(b);
	for (int i = 0; i <= len; ++i)
	{
		a[i] = b[i];
	}
}

int main() {
	int n;
	cin >> n;
	cin.get();
	char largest[100];
	int largest_len = 0;
	char a[100];

	for (int i = 0; i < n; ++i)
	{
		cin.getline(a, 100);
		int lena = Length(a);
		// Jo user ne new string input, if uski length badi hai
		// largest ke andar wali string se
		if (largest_len < lena) {
			Update(largest, a);
			largest_len = lena;
		}
	}

	cout << "Largest: " << largest << endl;


	return 0;
}
















