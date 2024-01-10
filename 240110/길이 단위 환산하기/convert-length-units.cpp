#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(1);
	float a;
	cin >> a;
	a *= 30.48f;
	a = round(a * 10);
	cout << a / 10;
}