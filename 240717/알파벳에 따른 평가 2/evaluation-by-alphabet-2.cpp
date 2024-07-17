#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	char c;
	cin >> c;
	if (c == 'S')
		cout << "Superior";
	else if (c == 'F')
		cout << "Fantastic";
	else if (c == 'G')
		cout << "Good";
	else if (c == 'U')
		cout << "Usually";
	else if (c == 'E')
		cout << "Effort";
        else
        cout << "Failure";
}