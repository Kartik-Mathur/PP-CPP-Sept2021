#include <iostream>
#include <list>
using namespace std;

class Graph {
public:
	list<int>* adjList;
	int n;

	Graph(int V) {
		adjList = new list<int>[V];
		n = V;
	}

	void addEdge(int u, int v, bool bidir = true) {
		adjList[u].push_back(v);
		if (bidir) {
			adjList[v].push_back(u);
		}
	}

	void print() {
		for (int i = 0; i < n; ++i)
		{
			cout << i << "-->";
			for (auto d : adjList[i]) {
				cout << d << " ";
			}
			cout << endl;
		}
	}

};

int main() {

	Graph g(5);
	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(1, 4);
	g.addEdge(1, 3);
	g.addEdge(4, 3);
	g.addEdge(2, 3);
	g.addEdge(1, 2);

	g.print();

	return 0;
}
















