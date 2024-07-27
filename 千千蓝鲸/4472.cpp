#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)
int n, book[105][105], g[55][55];
int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
struct info
{
    int x, y, step;
};
queue<info> q;
void bfs()
{
    book[1][1] = 1;
    q.push({1, 1, 0});
    while (!q.empty())
    {
        info f = q.front();
        if (g[f.x][f.y] == 2)
        {
            cout << f.step;
            return;
        }
        _for(i, 0, 3)
        {
            int xx = f.x + dx[i], yy = f.y + dy[i];
            if (xx > 0 && xx <= n && yy > 0 && yy <= n && book[xx][yy] == 0 && g[xx][yy] != 1)
            {
                book[xx][yy] = 1;
                q.push({xx, yy, f.step + 1});
            }
        }
        q.pop();
    }
    cout << "-1";
}
int main()
{
    cin >> n;
    _for(i, 1, n) _for(j, 1, n) cin >> g[i][j];
    bfs();
    return 0;
}