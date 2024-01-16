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
	priority_queue<int> pq;
	int n, m;
	int input;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		pq.push(input);
	}

	for (int i = 0; i < m; i++)
	{
		int a = pq.top() -1;
		pq.pop();
		pq.push(a);
	}
	cout << pq.top();
}