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
	set<pair<int, int>> s;
	int m, n;
	int a, b;
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		s.insert({ a,b });
	}

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if (s.lower_bound({ a,b }) != s.end())
		{
			cout << s.lower_bound({ a,b })->first << " " << s.lower_bound({ a,b })->second << endl;
		}
		else
			cout << -1 << " " << -1 << endl;
	}
}