#include <bits/stdc++.h>
using namespace std;
stack<char> s;
string a;
int sb = 0;
bool f;
int main()
{
	cin >> a;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == '(' || a[i] == '[')
			s.push(a[i]);
		if (a[i] == ')' || a[i] == ']')
		{
			if (s.empty())
			{
				f = 1;
				sb += 1;
			}
			else
			{
				if (a[i] == ')' && s.top() == '(' || a[i] == ']' && s.top() == '[')
				{
					s.pop();
					sb += 1;
				}
				else
					f = 1;
			}
		}
	}
	if (f || !s.empty())
		cout << "NO";
	else
		cout << "YES " << sb;
	return 0;
}
