#include <bits/stdc++.h>
using namespace std;
int n, m, q, p[5005], x, y;
int find(int x)
{
    if (p[x] == x)
        return x;
    return find(p[x]);
}
void join(int x, int y)
{
    int fx = find(x), fy = find(y);
    if (fx != fy)
        p[fy] = fx; // 建立亲戚关系
}

int main()
{
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++)
        p[i] = i; // 初始根
    while (m--)
    {
        cin >> x >> y;
        join(x, y);
    }
    while (q--)
    {
        cin >> x >> y; // find() 获取根节点元素
        if (find(x) == find(y))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}