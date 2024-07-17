#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;

	int c = b / ((a / 100) * (a / 100));
	cout << c;
	if (c >= 25)
		cout << endl << "Obesity";
}