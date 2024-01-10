#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int repeat = 0,input;
	for (int i = 1; i <= 5; i++)
	{
		cin >> input;
		if (input % 2 == 0)
		{
			repeat ++;
		}
	}cout << repeat;
}