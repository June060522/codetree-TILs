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
	map<string, int> um;
	map<string, string> um2;
	int repeat,check;
	cin >> repeat >> check;
	for (int i = 1; i <= repeat; i++)
	{
		string s;
		cin >> s;
		um[s] = i;
		um2[to_string(i)] = s;
	}

	for (int i = 0; i < check; i++)
	{
		string s;
		cin >> s;
		if (um.find(s) == um.end())
			cout << um2[s] << endl;
		else
			cout << um[s] << endl;

	}
}