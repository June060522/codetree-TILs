#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

long long DP[1001] = { 0,0,1,1,1,2};

int main()
{
	for (int i = 6; i < 1001; i++)
		DP[i] = (DP[i - 3] + DP[i - 2]) % 10007;

	int n;
	cin >> n;
	cout << DP[n];
}