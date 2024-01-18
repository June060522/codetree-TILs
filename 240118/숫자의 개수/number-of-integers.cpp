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

int arr[100000];
int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int input;
	for (int i = 0; i < m; i++)
	{
		cin >> input;
		cout << upper_bound(arr, arr + n, input) - lower_bound(arr, arr + n, input);

		cout << '\n';
	}
}