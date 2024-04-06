#include <bits/stdc++.h>
using namespace std;
string in;
int shuzi(string s)
{
	int i, count;
	count = 0;
	for (i = 0; s[i]; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			count++;
	}
	return count;
}

int xiaoxiezimu(string s)
{
	int i, count;
	count = 0;
	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			count++;
	}
	return count;
}
int daxiezimu(string s)
{
	int i, count;
	count = 0;
	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			count++;
	}
	return count;
}
int fuhao(string s)
{
	int i, count;
	count = 0;
	for (i = 0; s[i]; i++)
	{
		if (s[i] >= '!' && s[i] <= '/')
			count++;
	}
	return count;
}
int main()
{
	getline(cin, in);
	cout << shuzi(in) << " " << daxiezimu(in) << " " << xiaoxiezimu(in) << " " << fuhao(in);
	return 0;
}