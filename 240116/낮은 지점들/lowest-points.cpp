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
	unordered_map<int, int> um;
	int repeat = 0;
	cin >> repeat;

	string s;
	int a, b;
	for (int i = 0; i < repeat; i++)
	{
		cin >> a >> b;
		if (um.find(a) == um.end())
			um[a] = b;
		else
		{
			um[a] = min(um[a], b);
		}
	}
	int answer = 0;
	for (auto i : um)
	{
		answer += i.second;
	}
	cout << answer;
}