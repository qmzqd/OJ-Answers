#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)
const int N = 1e5 + 10;
int n, m, a[N], ans, l;
bool check(int x)
{
    int sum = 0, cnt = 1;
    _for(i, 1, n)
    {
        if (a[i] + sum > x)
        {
            cnt++;
            sum = a[i];
        }
        else
            sum += a[i];
    }
    return cnt <= m;
}
int main()
{
    cin >> n >> m;
    _for(i, 1, n) cin >> a[i];
    sort(a + 1, a + n + 1);
    int r = a[n];
    while (l < r)
    {
        int mid = (l + r + 1) / 2;
        if (check(mid))
            l = mid;
        else
            r = mid - 1;
    }
    cout << l << endl;
    return 0;
}
