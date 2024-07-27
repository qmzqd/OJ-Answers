#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)

int n, a[2000], f[2000], ans;

int main()
{
    cin >> n;
    _for(i, 1, n)
    {
        scanf("%d", &a[i]);
        f[i] = 1;
    }
    _for(i, 2, n)
    {
        _for(j, 1, i - 1)
        {
            if (a[i] > a[j] && f[i] < f[j] + 1)
            {
                f[i] = max(f[i], f[j] + 1);
            }
        }
        ans = max(ans, f[i]);
    }
    cout << ans;
    return 0;
}