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

long long n, m, l;

long long F(long long num)
{
	long long cnt = 0;
	long long low = 1, high = n, middle;
	while (low <= high)
	{
		++cnt;
		middle = (low + high) >> 1;

		if (middle < num)
		{
			low = middle + 1;
		}
		else if (middle > num)
		{
			high = middle - 1;
		}
		else
		{
			break;
		}
	}
	return cnt;
}

int main()
{
	cin >> n >> m >> l;

	long long minCnt = (long long)10e18;
	long long maxCnt = 0;

	for (int i = m; i <= l; ++i)
	{
		long long cnt = F(i);
		minCnt = min(minCnt, cnt);
		maxCnt = max(maxCnt, cnt);

	}
	cout << minCnt << " " << maxCnt;
}