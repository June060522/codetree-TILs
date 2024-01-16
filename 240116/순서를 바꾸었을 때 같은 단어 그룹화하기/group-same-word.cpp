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
	unordered_map<string, int> um;
	string s;
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> s;
		sort(s.begin(), s.end());
		um[s]++;
	}
	int answer = 0;
	for (auto i : um)
	{
		answer = max(answer, i.second);
	}
	cout << answer;
}