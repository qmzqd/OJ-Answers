#include <bits/stdc++.h>
using namespace std;
int sum = 1, n, a[11451419];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < sum)
        {
            continue;
        }
        else
        {
            sum++;
        }
    }
    cout << sum - 1 << endl;
    return 0;
}
