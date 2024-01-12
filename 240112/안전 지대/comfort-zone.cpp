#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

vector<vector<int>> graph;
vector<vector<int>> tempgraph;

int n, m,k,totalcnt = 0;

void DFS(int x,int y)
{
	if (x <= 0 || y <= 0 || x > n || y > m)
		return;

	if (tempgraph[x][y] == 0)
		return;

	tempgraph[x][y] = 0;
	DFS(x + 1, y);
	DFS(x - 1, y);
	DFS(x, y + 1);
	DFS(x, y - 1);
}

int solve(int num)
{
	tempgraph = graph;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (tempgraph[i][j] <= num)
			{
				tempgraph[i][j] = 0;
			}
			else
				tempgraph[i][j] = 1;
		}
	}

	int cnt = 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (tempgraph[i][j] == 1)
			{
				DFS(i, j);
				cnt++;
			}
		}
	}

	return cnt;
}

int main()
{
	int maxnum = 0;
	graph.resize(51);
	for (int i = 1; i < 51; i++)
		graph[i].resize(51);

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> graph[i][j];
			maxnum = max(maxnum, graph[i][j]);
		}
	}

	for (int i = 1; i <= maxnum; i++)
	{
		int x = solve(i);
		if (totalcnt < x)
		{
			k = i;
			totalcnt = x;
		}
	}

	cout << k << " " << totalcnt;
}