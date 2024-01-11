#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int Fun(int a, int b)
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
	int n;
	int answer = 0,input;
	cin >> n >> answer;
	for (int i = 1; i < n; i++)
	{
		cin >> input;
		answer = Fun1(answer, input);
	}
	cout << answer;
}