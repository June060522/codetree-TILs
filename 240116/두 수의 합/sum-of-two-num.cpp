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
	vector<long long> v;
	unordered_map<long long, long long> um;
	int n, m;
	long long input;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			um[v[i] + v[j]]++;
		}
	}

	cout << um[m];
}