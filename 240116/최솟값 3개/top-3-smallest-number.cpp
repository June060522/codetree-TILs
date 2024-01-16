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
	priority_queue<int, vector<int>, greater<int>> pq;
	int n, input;
	int a = 100000, b = 100000;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		int temp = input;
		if (input < a)
		{
			swap(a, input);
		}
		if (input < b)
		{
			swap(b, input);
		}
		if (i >= 2)
			pq.push(input);
		if (i < 2)
		{
			cout << -1 << '\n';
		}
		else
		{
			cout << a * b * pq.top() << '\n';
		}
	}
}