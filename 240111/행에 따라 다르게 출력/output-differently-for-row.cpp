#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n = 0;
	int cnt = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == 0)
				cnt++;
			else
				cnt += 2;

			cout << cnt << " ";
		}
		cout << endl;
	}
}