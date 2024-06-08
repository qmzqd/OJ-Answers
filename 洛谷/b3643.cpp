#include <bits/stdc++.h>
using namespace std;
int k, a[1002][1002], m;
int main()
{
    cin >> k >> m;
    memset(a, 0, sizeof(a));
    int c, b, w;
    for (int i = 1; i <= m; i++)
    {
        cin >> c >> b;
        a[c][b]=a[b][c]=1;
    }
    for (int j = 1; j <= k; j++)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
    int ans = 0;
    for (int j = 1; j <= k; j++)
    {
        ans = 0;
        for (int i = 1; i <= k; i++)
        {
            if (a[j][i] == 1)
            {
                ans++;
            }
        }
        cout << ans << " ";
        for (int p = 1; p <= k; p++)
        {
            if (a[j][p] == 1)
            {
                cout << p << " ";
            }
        }
        cout << endl;
    }
    return 0;
}