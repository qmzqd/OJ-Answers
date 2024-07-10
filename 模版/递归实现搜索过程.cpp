#include <bits/stdc++.h>
using namespace std;
int vis[4][4];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
void dfs(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx > 0 && nx <= 3 && ny > 0 && ny <= 3 && vis[nx][ny] == 0)
		{
			vis[nx][ny] = 1,
			dfs(nx, ny);
		}
	}
}
int main()
{

	return 0;
}
