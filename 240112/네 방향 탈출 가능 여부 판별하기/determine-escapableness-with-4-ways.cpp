#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int n, m;
int map[101][101];

void BFS()
{
	queue<pair<int, int>> q;
	q.push({1, 1});
	map[1][1] = 0;
	int dx[4] = { 1,-1,0,0 };
	int dy[4] = { 0,0,1,-1 };
	while (!q.empty())
	{
		pair<int, int> x = q.front();
		q.pop();

		if (x.first == n && x.second == m)
		{
			cout << 1;
			return;
		}
		for(int i = 0; i < 4; i++)
		if (map[x.first + dx[i]][x.second + dy[i]] == 1)
		{
			map[x.first + dx[i]][x.second + dy[i]] = 0;
			q.push({ x.first + dx[i], x.second + dy[i] });
		}
	}

	cout << 0;
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> map[i][j];
		}
	}

	BFS();
}