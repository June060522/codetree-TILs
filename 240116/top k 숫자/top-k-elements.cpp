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
	int n,m,input;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		s.insert(input);
	}

	for (int i = 0; i < m; i++)
	{
		cout << *s.rbegin() << " ";
		s.erase(*s.rbegin());
	}
}