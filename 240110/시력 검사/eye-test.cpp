#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	float f, f1;
	cin >> f >> f1;
	if (f >= 1 && f1 >= 1)
		cout << "High";
	else if (f >= 1 && f1 >= 1)
		cout << "Middle";
	else
		cout << "Low";
}