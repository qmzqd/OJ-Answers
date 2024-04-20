#include <bits/stdc++.h>
using namespace std;
char land[100][100];
bool vis[100][100];
int n, m;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void dfs(int x, int y)
{
    vis[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && land[nx][ny] == 'W' && !vis[nx][ny])
        {
            dfs(nx, ny);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> land[i][j];
        }
    }
    int cnt = 0;
    memset(vis, false, sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (land[i][j] == 'W' && !vis[i][j])
            {
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout < < < < endl;
    return 0;
}