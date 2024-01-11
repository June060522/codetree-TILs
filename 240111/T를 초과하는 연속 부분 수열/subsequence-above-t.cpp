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
	int arr[1000];
	int answer = 0, temp = 0;
	int testcase = 0, k;
	cin >> testcase >> k;

	for (int i = 0; i < testcase; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i < testcase; i++)
	{
		if (arr[i] > k)
			temp++;
		else
		{
			answer = max(temp, answer);
			temp = 1;
		}
	}
	answer = max(answer, temp);
	cout << answer;
}