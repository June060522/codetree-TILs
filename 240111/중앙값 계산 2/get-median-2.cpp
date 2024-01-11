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
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (i % 2 == 0)
		{
			sort(arr, arr + i + 1);
			cout << arr[i / 2] << " ";
		}
	}
}