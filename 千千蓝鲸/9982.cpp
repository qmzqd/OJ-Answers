#include <iostream>
using namespace std;
int n, a[10005], f[10005];
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		f[i] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i - 1; j++)
		{
			if (a[j] > a[i])
				f[i] = max(f[i], f[j] + 1);
		}
	}
	int ans = -1;
	for (int i = 1; i <= n; i++)
		ans = max(ans, f[i]);
	cout << ans;
	return 0;
}
