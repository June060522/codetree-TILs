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
	priority_queue<int,vector<int>,greater<int>> pq;
	int n, m;
	int input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input == 0)
		{
			if (pq.size() == 0)
				cout << 0 <<endl;
			else
			{
				cout << pq.top() << endl;
				pq.pop();
			}
		}
		else
			pq.push(input);
	}
}