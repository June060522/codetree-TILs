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
	set<int> s;
	int m,n,input;
	
	cin >> m >> n;

	for (int i = 0; i < m; i++)
	{
		cin >> input;
		s.insert(-input);
	}

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (s.lower_bound(-input) == s.end())
			cout << -1 << endl;
		else
		{
			cout << -*s.lower_bound(-input) << endl;
			s.erase(*s.lower_bound(-input));
		}
	}
}