#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	a += b;
	cout << a << " ";
	cout.fixed;
	cout.precision(2);
	a/= 2;
	cout << a;
}