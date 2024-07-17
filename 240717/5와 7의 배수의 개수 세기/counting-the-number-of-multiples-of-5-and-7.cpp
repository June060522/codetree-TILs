#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n,input;
	int five = 0, seven = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input % 5 == 0)
			five++;
		if (input % 7 == 0)
			seven++;
	}

	cout << five << endl << seven;
}