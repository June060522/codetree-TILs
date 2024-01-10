#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int a;
	cin >> a;
	if (a <= 2 || a == 12)
		cout << "Winter";
	else if(a <= 5)
		cout << "Spring";
	else if (a <= 8)
		cout << "Summer";
	else
		cout << "Fall";
}