// AdjListGeneric.cpp
#include <iostream>
#include <list>
#include <unordered_map>
#include <map>
#include <queue>
using namespace std;
template<typename T>
class Graph {

	void dfs_helper(T src, unordered_map<T, bool> &visited) {
		visited[src] = true;
		cout << src << " ";

		for (auto ch : adjList[src]) {
			if (!visited[ch]) {
				dfs_helper(ch, visited);
			}
		}
	}

public:
	unordered_map<T, list<T> > adjList;

	void addEdge(T u, T v, bool bidir = true) {
		adjList[u].push_back(v);
		if (bidir) {
			adjList[v].push_back(u);
		}
	}

	void bfs(T src) {

		unordered_map<T, bool> visited;
		queue<T> q;
		q.push(src);
		visited[src] = true;

		while (!q.empty()) {
			T node = q.front();
			q.pop();
			cout << node << ' ';

			for (auto ch : adjList[node]) {
				if (visited.count(ch) == 0) {
					q.push(ch);
					visited[ch] = true;
				}
			}
		}
		cout << endl;
	}

	// Single Source Shorted Path Algorithm
	int SSSP(T src, T des) {
		unordered_map<T, bool> visited;
		unordered_map<T, T> parent;
		unordered_map<T, int> distance;
		queue<T> q;

		q.push(src);
		visited[src] = true;
		parent[src] = src;
		distance[src] = 0;

		while (!q.empty()) {
			T node = q.front();
			q.pop();
			// cout << node << ' ';

			for (auto ch : adjList[node]) {
				if (visited.count(ch) == 0) {
					q.push(ch);
					visited[ch] = true;
					distance[ch] = distance[node] + 1;
					parent[ch] = node;
				}
			}
		}
		// cout << endl;
		// Print the distance from src of every node
		// for (auto d : distance) {
		// 	cout << "Distance of " << d.first << " from " << src << " is: " << d.second << endl;
		// }
		int ans = distance[des];

		// Print the path from src to des
		while (des != parent[des]) {
			cout << des << "<--";
			des = parent[des];
		}
		cout << des << endl;

		return ans;
	}

	void dfs(T src) {
		unordered_map<T, bool> visited;
		int components = 1;
		dfs_helper(src, visited);

		for (auto p : adjList) {
			if (!visited[p.first]) {
				components++;
				dfs_helper(p.first, visited);
			}
		}

		cout << endl << "Total components: " << components << endl;

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

	Graph<int> g;


	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(2, 4);
	g.addEdge(3, 4);
	g.addEdge(2, 3);
	g.addEdge(5, 3);
	g.addEdge(2, 1);
	g.addEdge(10, 11);
	g.addEdge(10, 12);
	g.addEdge(100, 112);
	g.addEdge(112, 123);

	g.dfs(0);

	return 0;
}
















