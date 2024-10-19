#include <bits/stdc++.h>
using namespace std;
int n, k, a[1145], ans;
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = i; j < n; j++)
        {
            if (a[i] - a[j] <= k)
            {
                cnt += a[j];
            }
            else
                break;
        }
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}
