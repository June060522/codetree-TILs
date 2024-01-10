#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	float a;
	cin >> a;
	if (a >= 1)
		cout << "High";
	else if (a >= 0.5f)
		cout << "Middle";
	else
		cout << "Low";

}