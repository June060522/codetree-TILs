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
	int n;
	cin >> n;
	int index = 2;
	for (int i = 1; i <= n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << index << " ";
			index += 2;
			if (index == 10)
				index = 2;
		}

		cout << endl;
	}
}