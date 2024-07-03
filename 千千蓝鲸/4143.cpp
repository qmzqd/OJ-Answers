#include <iostream>
using namespace std;
int n, m, a, b, g[15][15], book[15][15];
int dx[8] = {-1, 1, 2, 2, 1, -1, -2, -2};
int dy[8] = {2, 2, 1, -1, -2, -2, -1, 1};
bool f = 1;
void dfs(int x, int y)
{
	if (x == a && y == b)
	{
		f = 0;
		return;
	}
	for (int i = 0; i < 8; i++)
	{
		int xx = x + dx[i], yy = y + dy[i];
		if (xx > 0 && xx <= n && yy > 0 && yy <= m && g[xx][yy] == 0 && book[xx][yy] == 0)
		{
			book[xx][yy] = 1;
			dfs(xx, yy);
		}
	}
	return;
}
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> g[i][j];
	cin >> a >> b;
	if (g[1][1] == 1)
	{
		cout << "NO";
		return 0;
	}
	book[1][1] = 1;
	dfs(1, 1);
	if (f)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}
