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
			num += (n % 10 * pow(a, index));
		else
			num += n % 10;
		n /= 10;
		index++;
	}

	string result = "";

	while (num > 0) {
		int remainder = num % b;
		result = to_string(remainder) + result;
		num /= b;
	}

	cout << result;
}