#include <iostream>
#include <algorithm>
using namespace std;
int n, a[50005], b[50005], ans;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + n);
    int p = 1;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > b[p])
        {
            p++;
            ans++;
        }
    }
    cout << ans;
    return 0;
}
