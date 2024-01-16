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
	unordered_map<long long, long long> um;
	long long n, m;
	long long input;
	cin >> n >> m;
	for (long long i = 0; i < n; i++)
	{
		cin >> input;
		um[input]++;
	}
	long long answer = 0;
	for (auto i : um)
	{
		long long a = m - i.first;
		if (a == i.first)
		{
			for (long long i = 1; i < um[a]; i++)
				answer += i;
		}
		else
		{
			answer += um[a] * um[i.first];
			um[a] = 0;
			um[i.first] = 0;
		}
	}
	cout << answer;
}