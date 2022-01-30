// AdjListGeneric.cpp
#include <iostream>
#include <list>
#include <unordered_map>
#include <map>
using namespace std;

class Graph {
public:
	unordered_map<string, list<string> > adjList;

	void addEdge(string u, string v, bool bidir = true) {
		adjList[u].push_back(v);
		if (bidir) {
			adjList[v].push_back(u);
		}
	}

	void print() {
		for (auto p : adjList)
		{
			cout << p.first << "--> ";
			for (auto neighbour : p.second) {
				cout << neighbour << " ";
			}
			cout << endl;
		}
	}
};

int main() {

	Graph g;
	g.addEdge("Putin", "Trump", false);
	g.addEdge("Putin", "Modi", false);
	g.addEdge("Trump", "Modi", true);
	g.addEdge("Yogi", "Modi", true);
	g.addEdge("Yogi", "Prabhu", false);
	g.addEdge("Prabhu", "Modi", false);
	g.addEdge("Putin", "Pope", false);

	g.print();


	return 0;
}
















