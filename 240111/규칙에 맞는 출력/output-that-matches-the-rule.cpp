#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = n; i >= 1; i--)
	{
		for (int j = i; j <= n; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
}