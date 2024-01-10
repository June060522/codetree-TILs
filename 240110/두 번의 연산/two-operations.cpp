#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;

	if (n % 2 == 1)
	{
		n += 3;
	}

	if (n % 3 == 0)
	{
		n /= 3;
	}

	cout << n;
}