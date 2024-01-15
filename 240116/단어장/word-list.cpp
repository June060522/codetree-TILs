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
	int repeat = 0;
	cin >> repeat;

	string s;
	for (int i = 0; i < repeat; i++)
	{
		cin >> s;
		um[s]++;
	}
	for (auto i : um)
		cout << i.first << " : " << i.second << endl;
}