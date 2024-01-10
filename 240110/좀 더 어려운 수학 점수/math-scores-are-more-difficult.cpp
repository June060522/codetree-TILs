#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a > c)
		cout << "A";
	else if(a < c)
		cout << "B";
	else
	{
		if(b > d)
			cout << "A";
		else
			cout << "B";
	}
}