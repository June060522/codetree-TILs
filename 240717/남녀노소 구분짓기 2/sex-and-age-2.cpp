#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a == 0)
	{
		if (b >= 19)
			cout << "M";
		else
			cout << "B";

	}
	else
	{
		if(b >= 19)
			cout << "W";
		else
			cout << "G";

	}
}