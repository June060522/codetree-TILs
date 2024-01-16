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
	priority_queue<int> pq;
	int repeat = 0;
	cin >> repeat;

	string s;
	int num;
	for (int i = 0; i < repeat; i++)
	{
		cin >> s;
		if (s == "push")
		{
			cin >> num;
			pq.push(num);
		}
		else if (s == "size")
		{
			cout << pq.size() << endl;
		}
		else if (s == "empty")
			cout << pq.empty() << endl;
		else if (s == "pop")
		{
			cout << pq.top() << endl;
			pq.pop();
		}
		else
			cout << pq.top() << endl;
	}
}