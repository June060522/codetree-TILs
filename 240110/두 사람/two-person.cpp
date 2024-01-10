#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int a, b;
	char c, d;
	cin >> a >> c >> b >> d;
	if ((c == 'M' && a >= 19) || (d == 'M' && b >= 19))
		cout << 1;
	else
		cout << 0;
}