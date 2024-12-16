#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited, int& count) {
	visited[node] = true;
	count++;

	for (int neighbor : graph[node])
	{
		if (!visited[neighbor]) {
			dfs(neighbor, graph, visited, count);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, connections = 0;
	cin >> n >> connections;

	vector<vector<int>> graph(n + 1);
	for (int i = 0; i < connections; i++)
	{
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	vector<bool> visited(n + 1, false);

	int count = 0;
	dfs(1, graph, visited, count);

	cout << count - 1 << endl;

	return 0;
}
