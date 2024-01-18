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
	int n;
	cin >> n;

	int index = 1;
	for (int i = n; i >= 1; i--)
	{
		for (int j = n; j > i; j--)
			cout << "  ";
		for (int j = i; j >= 1; j--)
		{
			cout << j << " ";
		}
		cout << endl;
	}
}