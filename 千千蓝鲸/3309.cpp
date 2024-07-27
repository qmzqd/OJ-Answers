/*#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize(3)
int a[1145141];
int main()
{
    int n, m;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> m;
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= m; i++)
    {
        int j, l = 1, r = n, mid = 0;
        cin >> j;
        bool flag = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (a[mid] == j)
            {
                cout << "YES" << endl;
                flag = true;
                break;
            }
            else if (a[mid] > j)
                r = mid - 1;
            else
                l = mid + 1;
        }
        if (flag == false)
            cout << "NO" << endl;
    }
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1e7 + 10;
int main()
{
    int n;
    cin >> n;
    int a[MAX_N];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        int b = lower_bound(a + 1, a + n + 1, x) - a;
        if (b > n + 1 || a[b] != x)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}