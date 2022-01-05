// Functor.cpp
#include <iostream>
using namespace std;

class abc {
public:
	void operator()(int a, int b) {
		cout << a + b << endl;
	}
};

int main() {

	abc a;

	a(10, 20);

	return 0;
}
















