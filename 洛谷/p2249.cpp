#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, d = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
        d = 0;
        for (int o = 0; o < n; o++)
        {
            if (a[o] == b[i])
            {
                d++;
                cout << o + 1 << " ";
                break;
            }
        }
        if (d == 0)
            cout << -1 << " ";
    }
    return 0;
}