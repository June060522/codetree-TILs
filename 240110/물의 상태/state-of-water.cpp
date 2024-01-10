#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int a;
	cin >> a;
	if (a < 0)
		cout << "ice";
	else if (a >= 100)
		cout << "vapor";
	else
		cout << "water";

}