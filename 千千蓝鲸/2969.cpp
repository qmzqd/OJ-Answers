#include <bits/stdc++.h>
using namespace std;
int n, m[25];
int flag(int n)
{
    if (n <= 2)
    {
        return n;
    }
    m[1] = 1;
    m[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        m[i] = m[i - 1] + m[i - 2];
    }
    return m[n];
}

int main()
{
    cin >> n;
    cout << flag(n) << endl;
    return 0;
}