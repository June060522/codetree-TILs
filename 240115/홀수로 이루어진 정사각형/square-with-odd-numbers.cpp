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

using namespace std;

int main()
{
	int n,m;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		m = 11 + (i - 1) * 2;
		for (int j = 1; j <= n; j++)
		{
			cout << m << " ";
			m += 2;
		}
		cout << endl;
	}
}