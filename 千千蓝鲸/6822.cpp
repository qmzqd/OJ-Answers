#include <iostream>
using namespace std;
char dfs_qidong[20][20];
bool vis[20][20];
int n, m;
int sx, sy;
int cnt = 0;
bool yuanshen(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m && dfs_qidong[x][y] == '.';
}
void dfs(int x, int y)
{
    if (!yuanshen(x, y) || vis[x][y])
        return;
    vis[x][y] = true;
    cnt++;
    dfs(x - 1, y);
    dfs(x + 1, y);
    dfs(x, y - 1);
    dfs(x, y + 1);
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> dfs_qidong[i][j];
            if (dfs_qidong[i][j] == '@')
            {
                sx = i;
                sy = j;
                dfs_qidong[i][j] = '.';
            }
            vis[i][j] = false;
        }
    }
    dfs(sx, sy);
    cout << cnt << endl;
    return 0;
}