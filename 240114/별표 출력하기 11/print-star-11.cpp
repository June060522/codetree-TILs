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
	int n;
	cin >> n;
	for (int i = 0; i < n * 2 + 1; i++)
	{
		for (int j = 0; j < n * 2 + 1; j++)
		{
			if (i % 2 == 0)
				cout << "* ";
			else if(j % 2 == 0)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
}