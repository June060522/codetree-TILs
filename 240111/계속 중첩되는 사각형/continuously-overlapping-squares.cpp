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
	int x, y, x1, y1;
	int answer = 0;
	int arr[201][201] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y >> x1 >> y1;
		for (int j = y + 100; j < y1 + 100; j++)
		{
			for (int k = x + 100; k < x1 + 100; k++)
			{
				arr[j][k] = (i % 2 != 0);
			}
		}
	}

	for (int i = 0; i < 201; i++)
	{
		for (int j = 0; j < 201; j++)
			if (arr[i][j] == 1)
				answer++;
	}
	cout << answer;
}