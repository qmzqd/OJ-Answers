#include <bits/stdc++.h>
using namespace std;
int mp[1005][1005], book[1005][1005], n, ex, ey;
int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1};
int dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};
struct node
{
    int x, y, s;
};
queue<node> q;
void bfs()
{
    node a = {1, 1, 0};
    q.push(a);
    book[1][1] = 1;
    while (!q.empty())
    {
        node f = q.front();
        if (f.x == ex && f.y == ey)
        {
            cout << f.s << endl;
            return;
        }
        for (int i = 0; i < 8; i++)
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
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char c;
            cin >> c;
            if (c == '*')
                mp[i][j] = 1;
        }
    }
    cin >> ex >> ey;
    bfs();
    return 0;
}
