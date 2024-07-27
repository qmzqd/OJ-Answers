#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)
int n, a[4] = {10, 20, 50, 100}, f[1005];
int main()
{
   cin >> n;
   f[0] = 1;
   _for(i, 0, 3) _for(j, a[i], n)
       f[j] += f[j - a[i]];
   cout << f[n];
   return 0;
}
