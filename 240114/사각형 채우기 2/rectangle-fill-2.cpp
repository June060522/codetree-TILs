#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

long long dp[1001] = {0,1,3};

int main()
{
	int n;
	cin >> n;

	for (int i = 3; i <= 1000; i++)
		dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
	cout << dp[n];
}