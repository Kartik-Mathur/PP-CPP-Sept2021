// Heap.cpp
#include <iostream>
#include <vector>
using namespace std;
#define pb push_back

class minheap {
	vector<int> v;

	void heapify(int i) {
		int lc = 2 * i;
		int rc = lc + 1;
		int min = i;

		if (lc < v.size() and v[lc] < v[min]) {
			min = lc;
		}
		if (rc < v.size() and v[rc] < v[min]) {
			min = rc;
		}

		if (i != min) {
			swap(v[i], v[min]);
			heapify(min);
		}
	}

public:
	minheap() {
		v.pb(-1);
	}

	void push(int d) {
		v.pb(d);
		int c = v.size() - 1;
		int p = c / 2;
		while (c > 1 and (v[c] < v[p])) {
			swap(v[c], v[p]);
			c = p;
			p /= 2;
		}
	}

	void pop() {
		swap(v[1], v[v.size() - 1]);
		v.pop_back();
		heapify(1);
	}

	int top() {
		return v[1];
	}

	bool empty() {
		return v.size() == 1;
	}

};

int main() {

	minheap h;

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
















