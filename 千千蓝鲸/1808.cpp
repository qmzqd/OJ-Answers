#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, t;
    cin >> n >> t;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<long long> f(t + 1, 0);
    f[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = a[i]; j <= t; j++)
        {
            f[j] += f[j - a[i]];
        }
    }
    cout << f[t] << endl;
    return 0;
}