#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

vector<int> graph[1001];
bool isVisited[1001];

int answer = 0;

void DFS(int num)
{
	for (int i = 0; i < graph[num].size(); i++)
	{
		if (!isVisited[graph[num][i]])
		{
			isVisited[graph[num][i]] = true;
			answer++;
			DFS(graph[num][i]);
		}
	}
}

int main()
{
	int n, m;
	int input, input1;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> input >> input1;
		graph[input].push_back(input1);
		graph[input1].push_back(input);
	}

	isVisited[1] = true;
	DFS(1);
	cout << answer;
}