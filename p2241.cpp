#include <bits/stdc++.h>
using namespace std;
long long n, m, s1, s2;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == j)
                s1 += (n - i + 1) * (m - j + 1);
            else
                s2 += (n - i + 1) * (m - j + 1);
        }
    }
    cout << s1 << " " << s2;
    return 0;
}