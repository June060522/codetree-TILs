#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(2);
	string a;
	float b, c;
	cin >> a >> b >> c;
	cout << a << endl;

	b = round(b * 100);
	c = round(c * 100);
	cout << b / 100 << endl;
	cout << c / 100;
}