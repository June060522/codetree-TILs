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
#include <climits>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a < b)
		swap(a, b);

	for (int i = a; i >= b; i--)
		cout << i << " ";
}