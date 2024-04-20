#include <bits/stdc++.h>
using namespace std;
int n, man;
bool q(int x)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (x % i == 0)
			return 0;
	}
	return true;
}
int main()
{
	cin >> n;
	while (true)
	{
		if (q(n + 10000))
		{
			cout << n + 10000;
			return 0;
		}
		else if (q(n + 1000))
		{
			cout << n + 1000;
			return 0;
		}
		else if (q(n + 100))
		{
			cout << n + 100;
			return 0;
		}
		else if (q(n + 10))
		{
			cout << n + 10;
			return 0;
		}
		else if (q(n + 1))
		{
			cout << n + 1;
			return 0;
		}
		if (q(n - 10000))
		{
			cout << n - 10000;
			return 0;
		}
		else if (q(n - 1000))
		{
			cout << n - 1000;
			return 0;
		}
		else if (q(n - 100))
		{
			cout << n - 100;
			return 0;
		}
		else if (q(n - 10))
		{
			cout << n - 10;
			return 0;
		}
		else if (q(n - 1))
		{
			cout << n - 1;
			return 0;
		}
		else
			continue;
	}
	return 0;
}
