#include <bits/stdc++.h>
using namespace std;
int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
int n, ha, hb, la, lb;
char book[55][55];
bool dawd[55][55];
bool dfs(int x, int y)
{
    if (x == hb && y == lb)
        return true;
    if (x < 0 || x >= n || y < 0 || y >= n || book[x][y] == '#' || dawd[x][y])
        return false;
    dawd[x][y] = true;
    for (int i = 0; i < 4; ++i)
    {
        if (dfs(x + dx[i], y + dy[i]))
            return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; ++i)
            scanf("%s", book[i]);
        cin >> ha >> la >> hb >> lb;
        memset(dawd, false, sizeof(dawd));
        if (book[ha - 1][la - 1] == '#')
        {
            cout << "NO" << endl;
            continue;
        }
        bool flag = dfs(ha - 1, la - 1);
        puts(flag ? "YES" : "NO");
    }
    return 0;
}