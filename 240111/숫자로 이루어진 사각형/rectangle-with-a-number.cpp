#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n,index = 1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << index << " ";
			index++;
			if(index == 10)
				index -= 9;
		}
		cout << endl;
	}
}