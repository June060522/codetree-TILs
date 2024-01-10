#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int arr[101];

int solve(int a, int b)
{
	int returnVal = 0;

	for (int i = a; i <= b; i++)
	{
		returnVal += arr[i];
	}

	return returnVal;
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	int a, b;
	for (int j = 0; j < m; j++) 
	{
		cin >> a >> b;
		cout << solve(a, b) << endl;
	}
}