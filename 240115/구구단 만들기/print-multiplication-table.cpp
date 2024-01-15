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
	int n, m;
	cin >> n >> m;
	int index = 2;
	for (int j = 1; j <= 9; j++)
	{
		for (int i = m; i >= n; i -= 2)
		{
			cout << i << " * " << j << " = " << i * j;
			if (i != n)
				cout << " / ";

		}
		cout << endl;
	}
}