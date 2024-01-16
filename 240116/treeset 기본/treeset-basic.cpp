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
	int repeat = 0;
	
	cin >> repeat;
	
	string str; 
	int num;
	for (int i = 0; i < repeat; i++)
	{
		cin >> str;
		if (str == "add")
		{
			cin >> num;
			s.insert(num);
		}
		else if (str == "remove")
		{
			cin >> num;
			s.erase(num);
		}
		else if (str == "find")
		{
			cin >> num;
			if (s.find(num) != s.end())
				cout << "true" << endl;
			else cout << "false" << endl;
		}
		else if (str == "largest")
		{
			if (s.size() == 0)
				cout << "None" << endl;
			else
				cout << *s.rbegin() << endl;
		}
		else if (str == "smallest")
		{
			if (s.size() == 0)
				cout << "None" << endl;
			else
				cout << *s.begin() << endl;
		}
		else if (str == "lower_bound")
		{
			cin >> num;
			if (s.lower_bound(num) == s.end())
				cout << "None" << endl;
			else
				cout << *s.lower_bound(num) << endl;
		}
		else
		{
			cin >> num;
			if (s.upper_bound(num) == s.end())
				cout << "None" << endl;
			else
				cout << *s.upper_bound(num) << endl;
		}
	}
}