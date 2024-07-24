#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)
int n, a[25] = {0, 2, 5, 9};
int main()
{
    cin >> n;
    _for(i, 4, n) a[i] = a[i - 1] + i + 1;
    cout << a[n - 1] << endl;
    return 0;
}
