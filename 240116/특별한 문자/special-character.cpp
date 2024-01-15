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
	map<char, int> um;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		um[s[i]]++;
	}

	for (int i = 0; i < s.length(); i++)
	{
		if (um[s[i]] == 1)
		{
			cout << s[i];
			return 0;
		}
	}
	cout << "None";
}