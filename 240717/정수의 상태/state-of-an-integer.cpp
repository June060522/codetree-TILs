#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n == 0)
		cout << "zero";
	if( n > 0)
		cout << "positive";
	if( n < 0)
		cout << "negative";
}