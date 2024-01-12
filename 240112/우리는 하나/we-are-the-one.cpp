#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int n, k, u, d;
vector<vector<int>> v;
priority_queue<int> q;

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

int BFS(int x, int y,int answer, vector<vector<int>> tempV)
{
	int maxVal = answer + 1;
	int num = tempV[x][y];
	tempV[x][y] = -100;

	for (int i = 0; i < 4; i++)
	{
		if (x + dx[i] <= 0 || x + dx[i] > n ||
			y + dy[i] <= 0 || y + dy[i] > n)
			continue;
		int a = abs(num - tempV[x + dx[i]][ y + dy[i]]);
		if (a >= u && a <= d)
		{
			maxVal = max(maxVal, BFS(x + dx[i], y + dy[i], maxVal, tempV));
		}
	}

	return maxVal;
}

void solve()
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int num = BFS(i, j, 0,v);
			q.push(num);
		}
	}
}

int main()
{
	v.resize(9);
	for (int i = 1; i < 9; i++)
		v[i].resize(9);
	int answer = 0;
	cin >> n >> k >> u >> d;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cin >> v[i][j];
	}

	solve();

	for (int i = 0; i < k; i++)
	{
		answer += q.top();
		q.pop();
	}

	cout << answer;
}