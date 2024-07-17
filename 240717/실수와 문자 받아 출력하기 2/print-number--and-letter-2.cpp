#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << fixed;
	cout.precision(2);

	float a, b;
	string s;
	cin >> s >> a >> b;

	cout << round(b * 100) / 100 << endl << round(a * 100) / 100 << endl << s;
}