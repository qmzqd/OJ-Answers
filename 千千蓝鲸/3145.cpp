#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int prime[N], on[N], cnt = 1, n;
int main()
{
	for (int i = 2; i <= N; i++)
	{
		if (!on[i])
			prime[cnt++] = i;
		for (int j = 1; j <= cnt && i * prime[j] <= N; j++)
		{
			on[i * prime[j]] = 1;
			if (i % prime[j] == 0)
				break;
		}
	}
	while (cin >> n && n)
	{
		for (int i = 2; prime[i] <= n; i++)
		{
			int b = n - prime[i];
			if (!on[b])
			{
				printf("%d = %d + %d\n", n, prime[i], b);
				break;
			}
		}
	}
	return 0;
}
