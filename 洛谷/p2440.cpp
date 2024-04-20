#include <bits/stdc++.h>
using namespace std;
int n, k, a[100005];
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 100000000;
    while (l <= r && r != 0)
    {
        int mid = 1 + (r - l) / 2, tmp = 0;
        for (int i = 0; i < n; i++)
            tmp += a[i] / mid;
        if (tmp >= k)
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << r;
    return 0;
}