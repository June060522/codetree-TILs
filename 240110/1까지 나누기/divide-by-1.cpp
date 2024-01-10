#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int answer = 0;
	int n;
	cin >> n;
	while (n > 1)
	{
		answer++;
		n /= answer;
	}
	cout << answer;
}