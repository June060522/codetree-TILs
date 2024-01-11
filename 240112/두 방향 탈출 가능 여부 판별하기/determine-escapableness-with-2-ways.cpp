#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int graph[101][101];

int n, m;

void DFS(int x, int y)
{
	if (x <= 0 || y <= 0 || x > m || y > n)
		return;

	if (graph[x][y] != 1)
		return;

	DFS(x + 1, y);
	DFS(x - 1, y);
	DFS(x , y + 1);
	DFS(x , y - 1);
}

int main()
{
	int n, m;
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