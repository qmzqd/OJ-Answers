#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)
int n, t, a[25], f[1005];
int main()
{
    cin >> n >> t;
    _for(i, 1, n) scanf("%d", &a[i]);
    f[0] = 1;
    _for(i, 1, n) for (int j = t; j >= a[i]; j--)
        f[j] += f[j - a[i]];
    cout << f[t];
    return 0;
}
