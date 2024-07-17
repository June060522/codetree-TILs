#include <iostream>

using namespace std;

int main()
{
	cout << fixed;
	cout.precision(3);
	float f;
	for (int i = 0; i < 5; i++)
	{
		cin >> f;
		cout << f << endl;
	}
}