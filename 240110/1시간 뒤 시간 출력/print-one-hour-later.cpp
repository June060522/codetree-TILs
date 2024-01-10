#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string s;
    cin >> s;
	if (s[1] != ':')
	{
		if (s[1] == '9')
		{
			s[1] = '0';
			s[0]++;
		}
		else
		{
			s[1]++;
		}
	}
	else
	{
		if (s[0] != '9')
			s[0]++;
		else
		{
			s[0] = '1';
			s.insert(1,"0");
		}
	}
	cout << s;
}