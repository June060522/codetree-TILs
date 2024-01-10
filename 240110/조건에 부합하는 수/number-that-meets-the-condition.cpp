#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int i;
	cin >> i;
	for (int a = 1; a <= i; a++)
	{
		if(!((a % 2 == 0 && a % 4 != 0)
			|| ((a / 8) % 2 == 0)
			|| (a % 7 < 4)))
		cout << a << " ";
	}
}