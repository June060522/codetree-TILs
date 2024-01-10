#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == min(a,min(b,c)))
		cout << 1;
	else
		cout << 0;

	cout << " ";
	if (a == b && b == c)
		cout << 1;
	else
		cout << 0;
}