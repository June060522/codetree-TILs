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
	set<int> s;
	int n, input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		s.insert(input);
	}
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (s.find(input) == s.end())
			cout << 0;
		else
			cout << 1;
		cout << endl;
	}
}