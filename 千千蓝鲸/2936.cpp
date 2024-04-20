#include <bits/stdc++.h>
using namespace std;
int dfs_bianliang[10][10];
int N;
bool vis[10][10];
bool wobuzhidao(int x, int y)
{
    return x >= 0 && x < N && y >= 0 && y < N && dfs_bianliang[x][y] != 1;
}
bool dfs(int x, int y)
{
    if (!wobuzhidao(x, y))
        return false;
    if (dfs_bianliang[x][y] == 2)
        return true;
    vis[x][y] = true;

    bool zhaodaole = false;
    for (int dx = -1; dx <= 1; dx++)
    {
        for (int dy = -1; dy <= 1; dy++)
        {
            if (dx == 0 && dy == 0)
                continue;
            int nx = x + dx;
            int ny = y + dy;
            if (!vis[nx][ny])
            {
                zhaodaole = dfs(nx, ny);
                if (zhaodaole)
                    return true;
            }
        }
    }
    return false;
}

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> dfs_bianliang[i][j];
            vis[i][j] = false;
        }
    }
    bool zhaodaole = dfs(0, 0);
    if (zhaodaole)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}