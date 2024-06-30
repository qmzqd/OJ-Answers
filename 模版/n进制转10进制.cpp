#include <bits/stdc++.h>
using namespace std;
int yuanshen;
int main()
{
	int n;
	int a, b[105];
	char c[105];
	int k = 0;
	scanf("%d %s", &n, c);
	a = strlen(c);
	for (int i = 0; i < a; i++)
	{
		if (c[i] >= '0' && c[i] <= '9')
		{
			b[i] = c[i] - '0';
		}
		else
			b[i] = c[i] - 'A' + 10;
	}
	for (int i = a - 1; i >= 0; i--)
	{
		yuanshen += b[i] * pow(n, k);
		k++;
	}
	cout << yuanshen << endl;
	return 0;
}