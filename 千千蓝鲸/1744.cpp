#include <iostream>
using namespace std;
int n, m, g[15][15], book[15][15];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
bool f = 1;
int zhongdian1,zhongdian2;
void dfs(int x, int y)
{
    if(y==n&&x==n&&y==m&&x==m){
        f=0;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int xx = x + dx[i], yy = y + dy[i];
        if (xx > 0 && xx <= n && yy > 0 && yy <= n && g[xx][yy] == 0 && book[xx][yy] == 0)
        {
            book[xx][yy] = 1;
            dfs(xx, yy);
        }
    }
    return;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> g[i][j];
        }
    }
    book[1][1] = 1;
    dfs(0, 0);
    if (f)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
