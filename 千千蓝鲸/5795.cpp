#include <bits/stdc++.h>
using namespace std;
int n;
char a[10005];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != a[n - i + 1])
        {
            if (a[i] == '0')
                a[i] = a[n - i + 1];
            else if (a[n - i + 1] == '0')
                a[n - i + 1] = a[i];
            else
            {
                cout << "IMPOSSIBLE";
                return 0;
            }
        }
        else if (a[i] == '0')
        {
            cout << "IMPOSSIBLE";
            return 0;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << a[i];
    return 0;
}