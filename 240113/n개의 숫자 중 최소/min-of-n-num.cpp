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
	int arr[10];
	for (int i = 0; i < 10; i++)
		cin >> arr[i];

	sort(arr, arr + 10);

	int cnt = 0;
	int index = 0;
	while (arr[0] == arr[index])
	{
		cnt++;
		index++;
	}
	cout << arr[0] << " " << cnt;
}