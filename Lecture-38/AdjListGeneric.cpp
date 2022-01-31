// AdjListGeneric.cpp
#include <iostream>
#include <list>
#include <unordered_map>
#include <map>
#include <queue>
using namespace std;
template<typename T>
class Graph {
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
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	for (int u = 0; u <= 36; ++u)
	{
		for (int dice = 1; dice <= 6; ++dice)
		{
			int v = u + dice;
			v = v + board[v];

			g.addEdge(u, v, false);
		}
	}

	// g.addEdge(0, 1);
	// g.addEdge(0, 4);
	// g.addEdge(2, 4);
	// g.addEdge(3, 4);
	// g.addEdge(2, 3);
	// g.addEdge(5, 3);
	// g.addEdge(2, 1);

	int moves = g.SSSP(0, 36);
	cout << "Minimum moves" << moves << endl;
	// g.bfs(0);
	// g.print();


	return 0;
}
















