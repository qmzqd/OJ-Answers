#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1e5 + 10;
int n, k, a[MAX_N];
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int l = 1, r = a[n - 1];
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            count += a[i] / mid;
        }
        if (count >= k)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (l <= a[n - 1])
    {
        cout << l << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}