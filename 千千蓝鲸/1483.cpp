#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 2e5 + 10;

int n, m, a[MAX_N];

bool check(int x)
{
    int sum = 1, d = a[1];
    for (int i = 2; i <= n; i++)
    {
        if (a[i] - d >= x)
        {
            sum++;
            d = a[i];
        }
    }
    return sum >= m;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    int l = a[2] - a[1];
    int r = a[n] - a[1];
    int ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}