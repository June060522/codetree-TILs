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
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << index++ << " ";
		cout << endl;
	}
}