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

using namespace std;

int main()
{
	char c;
	int i;
	cin >> c >> i;

	if (c == 'A')
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
	}
	else
		for (int j = i; j >= 1; j--)
		{
			cout << j << " ";
		}
}