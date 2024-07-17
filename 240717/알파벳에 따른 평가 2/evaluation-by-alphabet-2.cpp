#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	char c;
	cin >> c;
	if (c == 'S')
		cout << "Superior";
	if (c == 'F')
		cout << "Fantastic";
	if (c == 'G')
		cout << "Good";
	if (c == 'U')
		cout << "Usually";
	if (c == 'E')
		cout << "Effort";
        else
        cout << "Failure";
}