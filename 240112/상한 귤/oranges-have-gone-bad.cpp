#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

queue<pair<int,int>> q;
vector<vector<int>>v;
	int n, m;

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
void BFS()
{
	while (!q.empty())
	{
		pair<int, int> pos = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			if (pos.first + dx[i] <= 0 || pos.first + dx[i] > n || pos.second + dy[i] <= 0 || pos.second + dy[i] > n)
				continue;

			if (v[pos.first + dx[i]][pos.second + dy[i]] == -2)
			{
				v[pos.first + dx[i]][pos.second + dy[i]] = v[pos.first][pos.second] + 1;
				q.push({ pos.first + dx[i],pos.second + dy[i] });
			}
		}
	}
}

int main()
{
	v.resize(101);
	for (int i = 1; i < 101; i++)
		v[i].resize(101);
	int input;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> input;
			if (input == 0)
				v[i][j] = -1;
			else if (input == 1)
				v[i][j] = -2;
			else
			{
				v[i][j] = 0;
				q.push({ i,j });
			}
		}
	}

	BFS();

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}