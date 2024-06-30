#include <iostream>
using namespace std;
int n, m, a[1005][1005], ans[1005][1005], mod = 100003;
int main()
{
	cin >> n >> m;
	while (m--)
	{
		int x, y;
		cin >> x >> y;
		a[x][y] = -1;
	}
	ans[0][1] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (a[i][j] == -1)
				ans[i][j] = 0;
			else
				ans[i][j] = (ans[i - 1][j] + ans[i][j - 1]) % mod;
		}
	}
	cout << ans[n][n];
	return 0;
}
