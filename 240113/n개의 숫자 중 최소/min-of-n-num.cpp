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
	int n;
	cin >> n;
	int arr[10];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	int cnt = 0;
	int index = 0;
	while (arr[0] != arr[index])
	{
		cnt++;
		index++;
	}
	cout << arr[0] << " " << cnt;
}