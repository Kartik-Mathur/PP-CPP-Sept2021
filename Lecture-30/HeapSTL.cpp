// HeapSTL.cpp
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class compare {
public:
	bool operator()(int a, int b) {
		return a < b;
	}
};

int main() {

	// priority_queue<int> h;
	// priority_queue<int, vector<int>, greater<int> > h;
	priority_queue<int, vector<int>, compare > h;

	h.push(10);
	h.push(2);
	h.push(30);
	h.push(4);
	h.push(15);
	h.push(0);

	// cout << h.top() << endl;
	// nlog(n)
	while (!h.empty()) {
		cout << h.top() << endl;
		h.pop();
	}

	return 0;
}
















