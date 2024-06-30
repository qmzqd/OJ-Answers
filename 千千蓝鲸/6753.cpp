#include <iostream>
using namespace std;
int n, a[1005][1005], f[1005][1005];
int main()
{
	cin >> n;
	for (int i = 0; i <= n + 1; i++)
		for (int j = 0; j <= n + 1; j++)
			f[i][j] = 114514;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++)
			cin >> a[i][j];
	f[1][1] = a[1][1];
	for (int i = 2; i <= n; i++)
		for (int j = 1; j <= i; j++)
		{
			f[i][j] = min(f[i - 1][j], f[i - 1][j - 1]) + a[i][j];
		}
	int ans = 114514;
	for (int i = 1; i <= n; i++)
		ans = min(ans, f[n][i]);
	cout << ans;
	return 0;
}
