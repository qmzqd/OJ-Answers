#include <bits/stdc++.h>
using namespace std;
int n, m, b, flag = 0;
struct stu
{
    int s, id;
} a[1005];
bool cmp(stu x, stu y)
{
    return x.s > y.s;
}
int main()
{
    cin >> n >> m >> b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].s;
        a[i].id = i + 1;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < m; i++)
    {
        if (a[i].id == b)
        {
            flag = 1;
            cout << a[i].id << " ";
        }
    }
    if (flag)
    {
        for (int i = 0; i < m; i++)
            if (a[i].id != b)
                cout << a[i].id << " ";
    }
    else
    {
        for (int i = 0; i < m - 1; i++)
            cout << a[i].id << " ";
        cout << b;
    }
    return 0;
}
