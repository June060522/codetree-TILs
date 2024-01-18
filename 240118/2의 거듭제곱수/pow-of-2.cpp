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
	int n;
	cin >> n;
	int cnt = 1;
	while (pow(2, cnt) != n)
	{
		cnt++;
	}cout << cnt;
}