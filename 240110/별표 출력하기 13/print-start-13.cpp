#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string s[11];
	string s1 = "* ";
	for (int i = 1; i < 11; i++)
	{
		s[i] = s1;
		s1 += "* ";
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			cout << s[n - (i / 2)] << endl;
		else
			cout << s[(i / 2) + 1] << endl;
	}

	for (int i = n - 1; i >= 0; i--)
	{
		if (i % 2 == 0)
			cout << s[n - (i / 2)] << endl;
		else
			cout << s[(i / 2) + 1] << endl;
	}
}