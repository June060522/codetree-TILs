#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a,b;
	cin >> a >> b;
	if (a > 1 && b > 1)
		cout << "H";
	else if (a > 0.5f && b > 0.5f)
		cout << "M";
	else
		cout << "L";
}