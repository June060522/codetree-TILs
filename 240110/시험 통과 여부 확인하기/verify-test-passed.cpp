#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int i;
	cin >> i;
	if (i >= 80)
		cout << "pass";
	else
		cout << 80 - i << " more score";

}