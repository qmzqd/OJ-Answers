#include <bits/stdc++.h>
using namespace std;
int n, sbbee[25];
int wedardbadawawd(int n)
{
    if (n <= 2)
    {
        return n;
    }
    sbbee[1] = 1;
    sbbee[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        sbbee[i] = sbbee[i - 1] + sbbee[i - 2];
    }
    return sbbee[n];
}

int main()
{
    cin >> n;
    cout << wedardbadawawd(n) << endl;
    return 0;
}