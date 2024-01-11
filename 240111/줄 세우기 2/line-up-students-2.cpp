#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;
struct Student
{
	int h;
	int w;
	int index;
};

bool cmp(const Student& a, const Student& b)
{
	if (a.h == b.h)
	{
		return a.w > b.w;
	}
	else
		return a.h < b.h;
}
vector<Student> v;

int main() 
{
	int testcase = 0;
	cin >> testcase;
	int a, b;
	for (int i = 1; i <= testcase; i++)
	{
		cin >> a >> b;
		Student s;
		s.h = a;
		s.w = b;
		s.index = i;
		v.push_back(s);
	}
	sort(v.begin(), v.end(),cmp);

	for (auto i : v)
	{
		cout << i.h << " " << i.w << " " << i.index << endl;
	}
}