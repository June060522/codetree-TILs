#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(2);
	double n,answer = 0;
	int repeat = 0;
	while (cin >> n)
	{
		if ((int)(n / 10) != 2)
			break;

		repeat++;
		answer += n;
	}
	answer /= repeat;
	answer = round(answer * 100);
	cout << answer / 100;
}