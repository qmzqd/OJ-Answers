#include <bits/stdc++.h>
using namespace std;
int vis[4][4]; // 标记数组
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
void dfs(int x, int y)
{
    vis[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= 4 || ny < 0 || ny >= 4 || vis[nx][ny] == 1)
            continue;
        dfs(nx, ny);
    }
}