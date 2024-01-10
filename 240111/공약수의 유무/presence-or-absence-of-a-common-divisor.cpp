#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if ((1920 % a == 0 && 2880 % a == 0) || (1920 % b == 0 && 2880 % b == 0))
		cout << 1;
	else
		cout << 0;

}