// Dijkstras.cpp
#include <iostream>
#include <list>
#include <unordered_map>
#include <cstring>
#include <set>
using namespace std;

template<typename T>
class Graph {
	unordered_map<T, list<pair<T, int> > > adjList;
public:
	void addEdge(T u, T v, int d, bool bidir = true) {
		adjList[u].push_back({v, d});
		if (bidir) {
			adjList[v].push_back({u, d});
		}
	}

	void print() {
		for (auto n : adjList) {
			cout << n.first << "--> ";
			for (auto p : n.second) {
				cout << "(" << p.first << ", " << p.second << ") ";
			}
			cout << endl;
		}

	}

	void Dijkstras(T src) {
		set<pair<int, T> > s;
		s.insert({0, src});

		unordered_map<T, int> dist;
		for (auto p : adjList) {
			dist[p.first] = INT_MAX;
		}

		dist[src] = 0;

		while (!s.empty()) {
			auto p = *s.begin();
			s.erase(s.begin());
			auto parent = p.second;
			int pd = p.first;

			for (auto c : adjList[parent]) {
				auto child = c.first;
				int ed = c.second;
				if (dist[child] > pd + ed) {
					auto address = s.find({dist[child], child});
					if (address != s.end()) {
						s.erase(address);
					}

					dist[child] = pd + ed;
					s.insert({pd + ed, child});
				}
			}

		}

		for (auto p : dist) {
			cout << "Distance of " << p.first << " from " << src << " is " << p.second << endl;
		}
	}

};

int main() {

	Graph<string> g;

	g.addEdge("Jaipur", "Amritsar", 4);
	g.addEdge("Jaipur", "Delhi", 2);
	g.addEdge("Jaipur", "Mumbai", 8);
	g.addEdge("Mumbai", "Bhopal", 3);
	g.addEdge("Agra", "Delhi", 1);
	g.addEdge("Amritsar", "Agra", 1);
	g.addEdge("Agra", "Bhopal", 2);

	// g.print();
	g.Dijkstras("Amritsar");


	return 0;
}
















