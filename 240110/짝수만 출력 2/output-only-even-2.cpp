#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	while (a >= b)
	{
		cout << a << " ";
		a -= 2;
	}
}