    #include <bits/stdc++.h>
    using namespace std;
    #define _for(i, a, b) for (int i = a; i <= b; i++)
    int n, a[105], f[105];
    int main()
    {
        cin >> n;
        _for(i, 1, n) cin >> a[i];
        memset(f, 0x3f, sizeof f);
        f[1] = 0;
        _for(i, 1, n)
        {
            _for(j, i + 1, i + a[i])
            {
                f[j] = min(f[j], f[i] + 1);
            }
        }
        cout<<f[n];
        return 0;
    }
