#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		for (int j = i; j < n; j++)
		{
			cout << (char)('A' + index) << " ";
			index++;
			index %= 26;
		}
		cout << endl;
	}
}