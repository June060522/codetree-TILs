#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	float a, b;
	cin >> a >> b;
	a /= 100;
	b /= a * a;
	cout << (int)b;
	if (b >= 25)
		cout << endl <<"Obesity";
}