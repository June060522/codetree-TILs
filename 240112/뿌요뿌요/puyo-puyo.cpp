#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

vector<vector<int>> graph;

int n, totalcnt = 0, maxcnt = 0;

int DFS(int x, int y, int num)
{
	if (x <= 0 || y <= 0 || x > n || y > n)
		return 0;

	if (graph[x][y] != num)
		return 0;
	graph[x][y] = 0;
	return 1 + DFS(x + 1, y, num) + DFS(x - 1, y, num) + DFS(x, y - 1, num) + DFS(x, y + 1, num);
}

int main()
{
	graph.resize(101);
	for (int i = 1; i < 101; i++)
		graph[i].resize(101);

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> graph[i][j];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (graph[i][j] != 0)
			{
				int x = DFS(i, j, graph[i][j]);
				if (x >= 4)
				{
					totalcnt++;
				}
					maxcnt = max(x, maxcnt);
			}
		}
	}

	cout << totalcnt << " " << maxcnt;
}