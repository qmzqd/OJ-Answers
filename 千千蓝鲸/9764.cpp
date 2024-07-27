#include <bits/stdc++.h>
#pragma GCC optimize(3)
#define _for(i, a, b) for (int i = a; i <= b; i++)
int n, m, g[55][55], book[55][55], sx, sy, ans = 1;
int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
void dfs(int x, int y)
{
    _for(i, 0, 3)
    {
        int xx = x + dx[i], yy = y + dy[i];
        if (xx > 0 && xx <= n && yy > 0 && yy <= m && book[xx][yy] == 0 && g[xx][yy] == 1)
        {
            ans++;
            book[xx][yy] = 1;
            dfs(xx, yy);
        }
    }
}
using namespace std;
int main()
{
    cin >> n >> m;
    _for(i, 1, n) _for(j, 1, m)
    {
        cin >> g[i][j];
        if (g[i][j] == 6)
        {
            sx = i;
            sy = j;
        }
    }
    book[sx][sy] = 1;
    dfs(sx, sy);
    cout << ans;
    return 0;
}
