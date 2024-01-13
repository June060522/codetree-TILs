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
	int answer = 999999;

	int input = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		answer = max(answer, input);
	}
	cout << answer;
}