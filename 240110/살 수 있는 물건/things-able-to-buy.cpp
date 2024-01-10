#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	float a;
	cin >> a;
	if (a >= 3000)
		cout << "book";
	else if (a >= 1000)
		cout << "mask";
	else
		cout << "no";

}