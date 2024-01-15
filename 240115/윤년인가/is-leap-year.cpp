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
	int n;
	cin >> n;
	if (n % 4 == 0 && (n % 100 != 0 || n % 400 == 0))
		cout << "true";
	else
		cout << "false";
}