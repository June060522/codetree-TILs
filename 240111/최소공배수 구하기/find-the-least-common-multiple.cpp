#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int Fun(int a,int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int Fun1(int a, int b)
{
	return (a * b) / Fun(a, b);
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << Fun1(a, b);
}