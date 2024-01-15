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
		for (int j = 1; j <= n; j++)
		{
			cout << i << " * " << j << " = " << i * j;
			if (j != n)
				cout << ", ";
		}

		cout << endl;
	}
}