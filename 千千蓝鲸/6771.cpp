#include <bits/stdc++.h>
using namespace std;
int n, a[305], top = 0;
int main()
{
    cin >> n;
    for (int i = 1; i <= 3 * n; i++)
    {
        a[++top] = 1;
        if (i % 3 == 0)
        {
            for (int j = 1; i <= 3; j++)
                cout << a;
        }
    }
    return 0;
}