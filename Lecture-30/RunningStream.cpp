#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void printHeap(priority_queue<int, vector<int>, greater<int> > h) {
	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}
	cout << endl;
}
int main() {
	priority_queue<int, vector<int>, greater<int> > h;
	int number;
	int k = 3;
	int cs = 0;
	while (true) {
		cin >> number;
		if (number == -1) {
			// Print the heap
			printHeap(h);
		}
		else if (cs < k) {
			h.push(number);
			cs++;
		}
		else {
			if (number > h.top()) {
				h.pop();
				h.push(number);
			}
		}
	}

	return 0;
}
















