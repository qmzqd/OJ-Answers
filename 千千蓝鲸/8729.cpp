#include <iostream>
using namespace std;
int n, m, ans;
char a[105][105];
int book[105][105];
int nx[4] = {0, 1, -1, 0};
int ny[4] = {1, 0, 0, -1};
void dfs(int x, int y)
{
	for (int i = 0; i <= 3; i++)
	{
		int xx = x + nx[i], yy = y + ny[i];
		if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && a[xx][yy] == 'R' && !book[xx][yy])
		{
			book[xx][yy] = 1;
			dfs(xx, yy);
		}
	}
}
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (a[i][j] == 'R' && !book[i][j])
			{
				ans++;
				book[i][j] = 1;
				dfs(i, j);
			}
		}
	}
	cout << ans;
	return 0;
}
