#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i * 2; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < i * 2; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}