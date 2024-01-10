#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(1);
	int a, b;
	cin >> a >> b;
	cout << a + b << " " << (double)(a + b) / 2;
}