#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(2);
	int n= 0;
	int repeat = 0;
	cin >> n;
	while (n < 1000)
	{
		if (n % 2 == 0)
		{
			n *= 3;
			n += 1;
		}
		else
		{
			n *= 2;
			n += 2;
		}
		repeat++;
	}
	cout << repeat;
}