#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int arr[100];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		if (i % 2 == 1)
		{
			sort(arr + 1, arr + i);
			cout << arr[i / 2 + 1] << " ";
		}
	}
}