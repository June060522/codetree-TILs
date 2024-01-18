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
	ios::sync_with_stdio(false);

	long long n, m, l;

	cin >> n >> m >> l;

	long long minCnt = (long long)10e18;
	long long maxCnt = 0;

	for (int i = m; i <= l; ++i)
	{
		long long cnt = 0;
		long long low = 1, high = n, middle;
		while (low <= high)
		{
			++cnt;
			middle = (low + high) >> 1;

			if (middle < i)
			{
				low = middle + 1;
			}
			else if (middle > i)
			{
				high = middle - 1;
			}
			else
			{
				minCnt = min(cnt, minCnt);
				maxCnt = max(cnt, maxCnt);
				break;
			}
		}

	}
	cout << minCnt << " " << maxCnt;
}