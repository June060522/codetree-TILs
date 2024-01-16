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
	set<int>s;
	set<int>s1;
	int mindist = 10e9;

	s.insert(0);
	s1.insert(0);
	

	int n,input;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (s.upper_bound(input) != s.end())
		{
			mindist = min(mindist, abs(*s.upper_bound(input) - input));
		}

		if (s1.upper_bound(-input) != s.end())
		{
			mindist = min(mindist, abs(*s1.upper_bound(-input) - input));
		}

		s.insert(input);
		s1.insert(-input);

		cout << mindist << endl;
	}
}