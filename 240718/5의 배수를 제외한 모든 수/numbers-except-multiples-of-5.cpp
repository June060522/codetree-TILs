#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << fixed;
	cout.precision(1);
	int x, y;
	cin >> x >> y;
	int sum = 0, total = 0;
	for (int i = y; i <= x; i++)
	{
		if (i % 5 == 0)
			continue;

		total++;
		sum += i;
	}

	if (sum == 0)
	{
		cout << "0 0.0";
	}
	else
	{
		cout << sum << " " << (double)sum / total;
	}
}