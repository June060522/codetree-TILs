#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float f;
	for (int i = 0; i < 5; i++)
	{
		cin >> f;
		cout << round(f * 1000) / 1000 << endl;
	}
}