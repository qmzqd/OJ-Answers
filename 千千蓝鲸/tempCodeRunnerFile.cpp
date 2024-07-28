#include <bits/stdc++.h>
using namespace std;
int n, m, a[100005];
int check(int mid)
{
    int cnt = 0, cur = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mid)
            return 0;
        if (cur + a[i] > mid)
        {
            cur = a[i];
            cnt++;
        }
        else
            cur += a[i];
    }
    return cnt + 1 <= m;
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int l = 1, r , ans = 0;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    printf("%d\n", ans);
    return 0;
}
