#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a > 90)
		cout << "passed";
	else
		cout << "need " << 90 - a << " more score";
}