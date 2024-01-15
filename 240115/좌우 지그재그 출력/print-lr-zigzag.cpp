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
	int index = 1;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			for (int i = 0; i < n; i++)
			{
				cout << index++ << " ";
			}
		}
		else
		{
			index += n - 1;
			for (int i = 0; i < n; i++)
			{
				cout << index-- << " ";
			}
			index += n + 1;
		}

		cout << endl;
	}
}