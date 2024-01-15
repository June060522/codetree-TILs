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
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			for (int j = 1; j <= n; j++)
			{
				cout << j;
			}
		}
		else
		{
			for (int j = n; j > 0; j--)
			{
				cout << j;
			}
		}
		cout << endl;
	}
}