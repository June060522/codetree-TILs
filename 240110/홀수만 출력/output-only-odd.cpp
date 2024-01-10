#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	if (a % 2 == 0)
		a++;
	for (int j = a; j <= b; j +=2)
		cout << j << " ";
}