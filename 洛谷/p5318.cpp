#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, m, book[N];
vector<int> a[N];
void dfs(int x)
{
    if (a[x].empty())
    {
        cout << x << " ";
        return;
    }
    cout << x << " ";
    for (int i = 0; i < a[x].size(); i++)
    {
        if (book[a[x][i]] == 0)
        {
            book[a[x][i]] = 1;
            dfs(a[x][i]);
        }
    }
}
void bfs()
{
    queue<int> q;
    memset(book, 0, sizeof book);
    book[1] = 1;
    q.push(1);
    while (!q.empty())
    {
        int f = q.front();
        cout << f << " ";
        for (int i = 0; i < a[f].size(); i++)
        {
            if (book[a[f][i]] == 0)
            {
                book[a[f][i]] = 1;
                q.push(a[f][i]);
            }
        }
        q.pop();
    }
}
int main()
{
    cin >> n >> m;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
    }
    for (int i = 1; i <= n; i++)
        sort(a[i].begin(), a[i].end());
    book[1] = 1;
    dfs(1);
    cout << endl;
    bfs();
    return 0;
}