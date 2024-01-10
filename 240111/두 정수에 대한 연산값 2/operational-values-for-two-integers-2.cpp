#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

void Solve(int& a, int& b)
{
	if (a < b)
	{
		a += 10;
		b *= 2;
	}
	else
	{
		b += 10;
		a *= 2;
	}
}

int main() {
	int a, b;
	cin >> a >> b;
	Solve(a, b);
	cout << a << " " << b;
}