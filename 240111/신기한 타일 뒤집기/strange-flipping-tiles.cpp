#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int testcase = 0;
	int black = 0, white = 0;
	int num;
	char dir;

	cin >> testcase;
	for (int i = 0; i < testcase; i++)
	{
		cin >> num >> dir;
		if (dir == 'R')
		{
			black += num;
			white = max(white - num, 0);
		}
		else
		{
			white += num;
			black = max(black - num, 0);
		}
	}

	cout << white << " " << black;
}