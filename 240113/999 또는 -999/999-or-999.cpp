#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int input;
	int minVal = 1000;
	int maxVal = -1000;
	for (int i = 0; i < 100; i++)
	{
		cin >> input;
        if(input == 999 || input == -999)
        break;
		minVal = min(minVal, input);
		maxVal = max(maxVal, input);
	}

	cout << maxVal << " " << minVal;
}