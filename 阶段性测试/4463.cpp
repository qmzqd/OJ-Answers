#include <bits/stdc++.h>
#include <string>
using namespace std;
int a[205], b[205], c[405];
string temp, cs2;
string add(string as, string bs)
{
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	int la = as.size(), lb = bs.size(), lc = max(la, lb) + 1;
	for (int i = 1; i <= la; i++)
		a[i] = as[la - i] - '0';
	for (int i = 1; i <= lb; i++)
		b[i] = bs[lb - i] - '0';
	for (int i = 1; i < lc; i++)
	{
		c[i] += a[i] + b[i];
		c[i + 1] = c[i] / 10;
		c[i] %= 10;
	}
	while (c[lc] == 0 && lc > 1)
		lc--;
	string cs;
	for (int i = lc; i >= 1; i--)
		cs += c[i] + '0';
	return cs;
}
string mul(string as, string bs)
{
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	int al = as.size(), bl = bs.size(), cl = al + bl;
	for (int i = 1; i <= al; i++)
		a[i] = as[al - i] - '0';
	for (int i = 1; i <= bl; i++)
		b[i] = bs[bl - i] - '0';
	for (int i = 1; i <= al; i++)
	{
		for (int j = 1; j <= bl; j++)
		{
			c[i + j - 1] += a[i] * b[j];
			c[i + j] += c[i + j - 1] / 10;
			c[i + j - 1] %= 10;
		}
	}
	while (c[cl] == 0 && cl > 0)
		cl--;
	string cs;
	for (int i = cl; i >= 1; i--)
		cs += c[i] + '0';
	return cs2;
}
int main()
{
	string as, bs;
	cin >> as >> bs;
	string cs = add(as, bs);
	temp = cs;
	string sb = to_string(c);
	cout << mul(cs, sb);
	return 0;
}