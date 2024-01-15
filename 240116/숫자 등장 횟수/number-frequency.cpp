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
	unordered_map<int, int> um;
	int m,n;
	cin >> m >> n;
	int a;
	for (int i = 1; i <= m; i++)
	{
		cin >> a;
		um[a]++;
	}
	for(int  i = 1; i <= n; i++)
	{
		cin >> a;
		cout << um[a] << " ";
	}
}