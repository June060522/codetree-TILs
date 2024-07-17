#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	if (n > m)
		cout << m - n;
	else
		cout << n - m;
}