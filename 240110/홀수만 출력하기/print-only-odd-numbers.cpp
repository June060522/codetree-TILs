#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int repeat,input;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if (input % 2 == 1 && input % 3 == 0)
			cout << input << endl;
	}
}