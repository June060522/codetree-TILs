#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << a / b << ".";
	a %= b;
	for (int i = 0; i < 20; i++)
	{
		a *= 10;
		cout << a / b;
		a %= b;
	}
}