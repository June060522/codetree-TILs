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
	int n, m, l;

	cin >> n >> m >> l;

	int cnt = 0;
	int minCnt = 0;
	int maxCnt = 0;
	int low = 1, high = n, middle;

	while (minCnt == 0 || maxCnt == 0)
	{
		cnt++;
		middle = (low + high) / 2;

		if (middle < m)
		{
			low = middle + 1;
		}
		else if (middle > l)
		{
			high = middle - 1;
		}
		else
		{
			if(minCnt == 0)
				minCnt = cnt;

			if (abs(middle - m) < abs(middle - l))
			{
				low = middle + 1;
			}
			else
			{
				high = middle - 1;
			}

			if (low > high)
				maxCnt = cnt;
		}
	}
	

	cout << minCnt << " " << maxCnt;
}