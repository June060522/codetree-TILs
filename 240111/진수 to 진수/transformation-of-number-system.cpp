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
	int a, b, n;
	cin >> a >> b >> n;
	int num = 0;
	int index = 0;
	while (n > 0)
	{
		if (index > 0)
			num += (n % 10 * index * a);
		else
			num += n % 10;
		n /= 10;
		index++;
	}

	int answer = 0;
	while (num > 0)
	{
		answer *= 10;
		answer += num % b;
		num /= b;
	}
	cout << answer;
}