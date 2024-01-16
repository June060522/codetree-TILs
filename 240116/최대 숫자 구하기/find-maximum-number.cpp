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
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		s.insert(i);
	}
	int input;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		s.erase(input);
		cout << *s.rbegin() << endl;
	}
}