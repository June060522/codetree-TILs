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
	int n, m;
	cin >> n >> m;
	if (n == 0)
		if (m >= 19)
			cout << "MAN";
		else
			cout << "BOY";
	else
		if (m >= 19)
			cout << "WOMAN";
		else
			cout << "GIRL";
}