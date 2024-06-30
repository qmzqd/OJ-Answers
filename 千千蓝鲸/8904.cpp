#include <bits/stdc++.h>
using namespace std;
int T, m, t[105], v[105], f[1005];
int main()
{
	cin >> T >> m;
	for (int i = 0; i < m; i++)
		cin >> t[i] >> v[i];
	for (int i = 0; i < m; i++)
	{
		for (int j = T; j >= t[i]; j--)
		{
			f[j] = max(f[j], f[j - t[i]] + v[i]);
		}
	}
	cout << f[T];
	return 0;
}
