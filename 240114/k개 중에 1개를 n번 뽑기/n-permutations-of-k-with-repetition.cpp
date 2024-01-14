#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int a, b;
int arr[9];
void BackTraking(int m)
{
	if (m == b)
	{
		for (int i = 1; i <= b; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	else
	{
		for (int i = 1; i <= a; i++)
		{
			arr[m + 1] = i;
			BackTraking(m + 1);
		}
	}
}

int main()
{
	cin >> a >> b;
	for (int i = 1; i <= a; i++)
	{
		arr[1] = i;
		BackTraking(1);
	}
}