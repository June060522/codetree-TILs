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
	unordered_set<int> s;
	int repeat = 0;
	
	cin >> repeat;
	
	string str; 
	int num;
	for (int i = 0; i < repeat; i++)
	{
		cin >> str >> num;
		if (str == "add")
			s.insert(num);
		else if (str == "remove")
			s.erase(num);
		else
			if (s.find(num) != s.end())
				cout << "true" << endl;
			else cout << "false" << endl;
	}
}