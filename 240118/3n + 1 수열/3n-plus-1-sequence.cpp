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
	int cnt = 0;
	int n;
	cin >> n;

	while (n != 1)
	{
		cnt++;
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
	}

	cout << cnt;
}