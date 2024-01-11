#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

vector<vector<int>> graph;

int n, m;

void DFS(int x, int y)
{
	if (x <= 0 || y <= 0 || x > n || y > m)
		return;

	if (graph[x][y] != 1)
		return;

	graph[x][y] = -1;
	DFS(x + 1, y);
	DFS(x - 1, y);
	DFS(x , y + 1);
	DFS(x , y - 1);
}

int main()
{
	graph.resize(101);
	for(int i = 1; i < 101; i++)
			graph[i].resize(101);

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> graph[i][j];
		}
	}

	DFS(1,1);

	cout << (graph[n][m] == -1);
}