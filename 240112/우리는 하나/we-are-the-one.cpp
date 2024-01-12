#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int n, k, u, d, answer = 0;
vector<vector<int>> v;
vector<pair<int,int>> pos;
bool isvisited[9][9];

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

int BFS()
{
	bool visited[9][9];
	for (int j = 0; j < 9; j++)
	{
		for (int i = 0; i < 9; i++)
			visited[i][j] = false;
	}
	queue<pair<int,int>> nodes;
	for (int i = 0; i < pos.size(); i++)
	{
		visited[pos[i].first][pos[i].second] = true;
		nodes.push(pos[i]);
	}
	int cnt = nodes.size();

	while (!nodes.empty())
	{
		int posx = nodes.front().first;
		int posy = nodes.front().second;
		nodes.pop();

		for (int i = 0; i < 4; i++)
		{
			if (posx + dx[i] <= 0 || posx + dx[i] > n || posy + dy[i] > n || posy + dy[i] <= 0)
				continue;

			int tempnum = abs(v[posx][posy] - v[posx + dx[i]][posy + dy[i]]);
			if (tempnum < u || tempnum > d)
				continue;

			if(visited[posx + dx[i]][posy + dy[i]])
				continue;

			cnt++;


			nodes.push({ posx + dx[i], posy + dy[i] });
			visited[posx + dx[i]][posy + dy[i]] = true;
		}
	}
	return cnt;
}

void solve(int x,int y,int cnt)
{
	if (cnt == k)
	{
		answer = max(answer, BFS());
	}
	else
	{
		for (int i = x; i <= n; i++)
		{
			for (int j = y; j <= n; j++)
			{
				if (isvisited[i][j]) continue;
				isvisited[i][j] = true;
				pos.push_back({ i,j });
				solve(i,j,cnt + 1);
				pos.pop_back();
				isvisited[i][j] = false;;
			}
		}
	}
}

int main()
{
	v.resize(9);
	for (int i = 1; i < 9; i++)
		v[i].resize(9);
	cin >> n >> k >> u >> d;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cin >> v[i][j];
	}

	solve(1,1,0);

	cout << answer;
}