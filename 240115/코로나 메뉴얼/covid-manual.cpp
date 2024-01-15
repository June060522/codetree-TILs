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
	int cnt = 0;

	for (int i = 0; i < 3; i++)
	{
		char c;
		int n;
		cin >> c >> n;
		if (c == 'Y' && n >= 37)
			cnt++;
	}

	if (cnt >= 2)
		cout << "E";
	else
		cout << "N";
}