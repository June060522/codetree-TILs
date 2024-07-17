#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n; cin >> n;
	n *= 10;
	double answer = 0;
	for (int i = 185; i <= n; i++)
		answer += i;

	cout << answer << " " << answer / (n - 184);
}