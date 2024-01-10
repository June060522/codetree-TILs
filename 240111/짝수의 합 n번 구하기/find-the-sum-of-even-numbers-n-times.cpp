#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a % 2 == 1)
			a++;
		int answer = 0;
		for (int j = a; j <= b; j += 2)
		{
			answer += j;
		}
		cout << answer << endl;
	}
}