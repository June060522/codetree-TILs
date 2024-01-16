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
	priority_queue<long long, vector<long long>, greater<long long>> pq;
	long long n, input;
	long long a = 100000, b = 100000;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input < a)
		{
			swap(a, input);
		}
		if (input < b)
		{
			swap(b, input);
		}
		if (i < 2)
		{
			cout << -1 << '\n';
		}
		else
		{
			pq.push(input);
			cout << a * b * pq.top() << '\n';
		}
	}
}