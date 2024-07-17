#include <bits/stdc++.h>
using namespace std;
int n, m;
int main()
{
    cin >> n;
    m = (n - n % 10) / 10;
    cout << n - m;
    return 0;
}
