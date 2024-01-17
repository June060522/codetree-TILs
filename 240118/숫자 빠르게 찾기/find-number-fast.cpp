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

int arr[100001];

int main()
{
	int n,m,input;

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 0; i < m; i++)
	{
		cin >> input;

		int low = 1, high = n, middle;

		while (low <= high)
		{
			middle = (low + high) / 2;

			if (input > arr[middle])
				low = middle + 1;
			else if (input < arr[middle])
				high = middle - 1;
			else
				break;
		}

		if (low <= high)
			cout << middle << '\n';
		else
			cout << -1 << '\n';
	}
}