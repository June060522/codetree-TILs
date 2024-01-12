#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

long long DP[46] = { 0,1,1 };

int main()
{
	for (int i = 3; i < 46; i++)
		DP[i] = DP[i - 1] + DP[i - 2];

	int n;
	cin >> n;
	cout << DP[n];
}