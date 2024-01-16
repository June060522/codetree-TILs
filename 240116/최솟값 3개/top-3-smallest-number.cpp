#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <climits>

using namespace std;

int main()
{
	priority_queue<int,vector<int>,greater<int>> pq;
	int n,input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		pq.push(input);
		if (pq.size() <= 2)
			cout << -1 << endl;
		else
		{
			long long answer = 1;
			priority_queue<int, vector<int>, greater<int>> tempPQ = pq;
			for (int i = 0; i < 3; i++)
			{
				answer *= tempPQ.top();
				tempPQ.pop();
			}
			cout << answer << endl;
		}
	}
}