#include <bits/stdc++.h>
using namespace std;
int sx, sy, ex, ey, book[1005][1005];
int dx[8] = {1, 1, 2, -2, -2, 2, -1, -1};
int dy[8] = {2, -2, 1, 1, -1, -1, -2, 2};
struct node1
{
    int x1, y1, s1;
};
struct node2
{
    int x2, y2, s2;
};
queue<node1> q1;
queue<node2> q2;
void bfs1()
{
    node1 a = {1, 1, 0};
    q1.push(a);
    book[1][1] = 1;
    while (!q1.empty())
    {
        node1 f = q1.front();
        if (f.x1 == sx && f.y1 == sy)
        {
            cout << f.s1 << endl;
            return;
        }
        for (int i = 0; i < 8; i++)
        {
            int nx = f.x1 + dx[i], ny = f.y1 + dy[i];
            if (nx > 0 && nx <= 100 && ny > 0 && ny <= 100 && book[nx][ny] != 1)
            {
                book[nx][ny] = 1;
                node1 k = {nx, ny, f.s1 + 1};
                q1.push(k);
            }
        }
        q1.pop();
    }
    return;
}
void bfs2()
{
    node2 a = {1, 1, 0};
    q2.push(a);
    book[1][1] = 1;
    while (!q2.empty())
    {
        node2 f = q2.front();
        if (f.x2 == ex && f.y2 == ey)
        {
            cout << f.s2 << endl;
            return;
        }
        for (int i = 0; i < 8; i++)
        {
            int nx = f.x2 + dx[i], ny = f.y2 + dy[i];
            if (nx > 0 && nx <= 100 && ny > 0 && ny <= 100 && book[nx][ny] != 1)
            {
                book[nx][ny] = 1;
                node2 k = {nx, ny, f.s2 + 1};
                q2.push(k);
            }
        }
        q2.pop();
    }
    return;
}
int main()
{
    cin >> sx >> sy >> ex >> ey;
    bfs1();
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= 100; j++)
        {
            book[i][j] = 0;
        }
    }
    bfs2();
    return 0;
}
