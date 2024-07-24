#include <bits/stdc++.h>
using namespace std;
int n, a[1145];
int k = 0;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    int ans = 1, sum = a[1];
    for (int i = 2; i <= n; i++)
        if (sum + a[i] <= k)
            sum += a[i];
        else
        {
            ans++;
            sum = a[i];
        }
    cout << ans << endl;
    return 0;
}
