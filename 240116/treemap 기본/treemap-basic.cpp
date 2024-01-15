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
	map<int, int> um;
	int repeat = 0;
	cin >> repeat;
	string s;
	int a, b;
	for (int i = 1; i <= repeat; i++)
	{
		cin >> s;
		if (s == "add")
		{
			cin >> a >> b;
			um[a] = b;
		}
		else if (s == "remove")
		{
			cin >> a;
			um.erase(a);
		}
		else if (s == "find")
		{
			cin >> a;
			if (um.find(a) == um.end())
				cout << "None" << endl;
			else
				cout << um[a] << endl;
		}
		else
		{
			if(um.size() == 0)
				cout << "None" << endl;
			else
			{
				for (auto i : um)
				{
					cout << i.second << " ";
				}
				cout << endl;
			}
		}
	}
}