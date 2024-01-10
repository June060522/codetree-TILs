#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int num, k;
	cin >> num;
	k = num / 10 + num % 10;
	if (num % 2 == 0 && k % 5 == 0)
		cout << "Yes";
	else
		cout << "No";
}