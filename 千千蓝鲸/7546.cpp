#include <bits/stdc++.h>
using namespace std;
long long n, a[19198], sum;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        sum += a[i] = a[i - 1] + i;
    cout << sum;
    return 0;
}