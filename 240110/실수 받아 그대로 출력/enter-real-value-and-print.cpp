#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	float a;
	cin >> a;
	a = round(a * 100);
	cout << a / 100;
}