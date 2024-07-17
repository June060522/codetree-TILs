#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int index = 1;

	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < m; i++)
		{
			cout << index++ << " ";
		}
		cout << endl;
	}
}