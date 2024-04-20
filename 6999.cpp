#include <bits/stdc++.h>
using namespace std;
int mp[1005][1005], book[1005][1005], n, sx, sy, ex, ey;
int dx[4] = {2, 2, -2, -2};
int dy[4] = {2, -2, 2, -2};
struct node
{
    int x, y, s;
};
queue<node> q;
void bfs()
{
    node a = {sx, sy, 0};
    q.push(a);
    book[sx][sy] = 1;
    while (!q.empty())
    {
        node f = q.front();
        if (f.x == ex && f.y == ey)
        {
            cout << f.s << endl;
            return;
        }
        for (int i = 0; i < 4; i++)
        {
            int nx = f.x + dx[i], ny = f.y + dy[i];
            if (nx > 0 && nx <= n && ny > 0 && ny <= n && mp[nx][ny] != 1 && book[nx][ny] == 0)
            {
                book[nx][ny] = 1;
                node k = {nx, ny, f.s + 1};
                q.push(k);
            }
        }
        q.pop();
    }
    cout << -1 << endl;
    return;
}
int main()
{
    cin >> n >> sx >> sy >> ex >> ey;
    bfs();
    return 0;
}
