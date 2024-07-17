#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (m == 1)
			{
				cout << i + 1 << " ";
			}
			else if (m == 2)
			{
				if (j % 2 == 1)
				{
					cout << j + 1 << " ";
				}
				else
				{
					cout << n - j - 1 << " ";
				}
			}
			else
			{
				cout << ((j + 1) * (i + 1)) << " ";
			}
		}
		cout << endl;
	}
}