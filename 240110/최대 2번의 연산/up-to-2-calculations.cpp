#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;

	if (n % 2 == 0)
	{
		n /= 2;
	}

	if (n % 2 == 1)
	{
		n += 1;
		n /= 2;
	}

	cout << n;
}