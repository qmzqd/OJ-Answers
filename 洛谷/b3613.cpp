#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;
int t, n, m;
vector<int> a[N];
int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
			a[i].clear();
		while (m--)
		{
			int x, y;
			cin >> x >> y;
			a[x].push_back(y);
		}
		for (int i = 1; i <= n; i++)
		{
			sort(a[i].begin(), a[i].end());
			for (int j = 0; j < a[i].size(); j++)
				cout << a[i][j] << " ";
			cout << endl;
		}
	}
	return 0;
}