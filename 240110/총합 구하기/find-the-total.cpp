#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int answer = 0;
	for (int i = a; i <= b; i++)
	{
		if (i % 6 == 0 && i % 8 != 0)
			answer += i;
	}
	cout << answer;
}