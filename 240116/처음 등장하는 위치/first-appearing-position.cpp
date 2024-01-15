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
	map<int, int> um;
	int repeat = 0;
	cin >> repeat;

	int a;
	for (int i = 1; i <= repeat; i++)
	{
		cin >> a;
		if (um.find(a) == um.end())
			um[a] = i;
	}
	for (auto i : um)
		cout << i.first << " " << i.second << endl;;
}