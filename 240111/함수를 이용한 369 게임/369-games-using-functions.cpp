#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

bool check(int num)
{
	if (num % 3 == 0)
		return true;

	while (num > 0)
	{
		if ((num % 10) % 3 == 0 && (num % 10) != 0)
			return true;
		num /= 10;
	}

	return false;
}

int main() {
	int a,b,answer = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (check(i))
			answer++;
	}
	cout << answer;
	
}