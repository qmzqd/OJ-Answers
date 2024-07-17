#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)
int V, n, v[35], f[20005];
int main()
{
   cin >> V >> n;
   _for(i, 1, n) scanf("%d", &v[i]);
   _for(i, 1, n) for (int j = V; j >= v[i]; j--)
       f[j] = max(f[j], f[j - v[i]] + v[i]);
   cout << V - f[V] << endl;
   return 0;
}
