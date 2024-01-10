#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	a += b;
	b += a;
	cout << a << " " << b;
}