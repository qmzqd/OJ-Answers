#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m[n];
    for (int i = 0; i < n; i++)
    {
        cin >> m[i]; 
    }
    sort(m, m + n);
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (m[i + 1] - m[i] != 1)
        {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}