#include <bits/stdc++.h>
using namespace std;
int n;
string a, b;
bool issimiler(string x, string y)
{
    int m = 0;
    if (x == y)
    {
        return true;
    }
    if (x.size() - y.size() >= 2 || y.size() - x.size() >= 2)
    {
        return false;
    }
    for (int i = 0; i < n; i++)
    {
        if (x[i] != y[i] || y[i] != x[i])
            m++;
    }
    if (x.size() - y.size() >= 1 || y.size() - x.size() >= 1)
    {
        m++;
    }
    if (m <= 1)
        return true;
    else
        return false;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        if (issimiler(a, b))
            cout << "similar\n";
        else
            cout << "not similar\n";
    }
    return 0;
}