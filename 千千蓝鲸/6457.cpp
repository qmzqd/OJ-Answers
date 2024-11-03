#include <bits/stdc++.h>
using namespace std;
int mp[55][55], book[55][55], n, m, a, b, ans;
int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
struct node
{
	int x, y;
};
queue<node> q;
void bfs()
{
	node xx = {a, b};
	q.push(xx);
	book[a][b] = 1;
	while (!q.empty())
	{
		node f = q.front();
		for (int i = 0; i < 4; i++)
		{
			int nx = f.x + dx[i], ny = f.y + dy[i];
			node k = {nx, ny};
			if (nx > 0 && nx <= n && ny > 0 && ny <= m && mp[nx][ny] != 0 && book[nx][ny] == 0)
			{
				book[nx][ny] = 1;
				q.push(k);
				ans++;
			}
		}
		q.pop();
	}
}
int main()
{
	cin >> n >> m >> a >> b;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			int c;
			cin >> c;
			if (c == 1)
				mp[i][j] = 1;
			if (c == 0)
				mp[i][j] = 0;
		}
	}
	if (mp[1][1] == 1)
	{
		cout << "NO";
		return 0;
	}
	bfs();
	cout << ans + 1;
	return 0;
}
