#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

bool CheckDay(int year, int month, int day)
{
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day == 31)
			return false;
	}

	if (month == 2)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			if (day > 29)
				return false;
		}
		else
		{
			if (day > 28)
				return false;
		}
	}


		return true;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (CheckDay(a, b, c))
	{
		if (b <= 2 || b == 12)
			cout << "Winter";
		else if(b <=5)
			cout << "Spring";
		else if(b <=8)
			cout << "Summer";
		else
			cout << "Fall";
	}
	else
	{
		cout << -1;
	}
}