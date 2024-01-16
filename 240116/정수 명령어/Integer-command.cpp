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
	int testcase = 0;
	cin >> testcase;
	for (int i = 0; i < testcase; i++)
	{
		int m;
		cin >> m;
		set<int> s;
		for (int j = 0; j < m; j++)
		{
			char c; int n;
			cin >> c >> n;
			if (c == 'I')
				s.insert(n);
			else
				if (n == 1 && s.size() > 0)
					s.erase(*s.rbegin());
				else if(s.size() > 0)
					s.erase(*s.begin());
		}

		if (s.size() == 0)
			cout << "EMPTY" << endl;
		else
			cout << *s.rbegin() << " " << *s.begin() << endl;
	}
}