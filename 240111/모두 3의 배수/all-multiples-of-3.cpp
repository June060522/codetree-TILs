#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int answer = 1;
	int input;

	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		if (input % 3 != 0)
			answer = 0;
	}

	cout << answer;
}