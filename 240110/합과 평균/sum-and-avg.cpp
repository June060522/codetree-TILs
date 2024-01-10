#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	cout.fixed;
	cin.precision(1);
	float a, b;
	cin >> a >> b;
	a += b;
	cout << a << " ";
	a = round(a * 10);
	cout << a / 20;
}