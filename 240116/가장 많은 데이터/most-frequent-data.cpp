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
	int repeat;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		string s;
		cin >> s;
		um[s]++;
	}
	int answer = 0;
	for (auto i : um)
	{
		answer = max(answer, i.second);
	}
	cout << answer;
}