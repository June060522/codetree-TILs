#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

bool arr[101];
int main() {
	arr[1] = false;
	for (int i = 2; i < 50; i++)
	{
		for (int j = i * 2; j <= 100; j += i)
		{
			arr[j] = true;
		}
	}
	int a, b;
	int answer = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (!arr[i])
			answer += i;
	}
	cout << answer;
}