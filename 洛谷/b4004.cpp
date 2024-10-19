#include <bits/stdc++.h>
using namespace std;
int t, n;
int a[114514];
int main()
{
   cin >> t;
   while (t--)
   {
      cin >> n;
      for (int i = 1; i <= n; i++)
      {
         cin >> a[i];
      }
      sort(a + 1, a + n + 1);
      for (int i = 1; i < n; i++)
      {
         if (a[n] % a[i] != 0)
         {
            a[n] = 0;
            break;
         }
      }
      if (a[n] == 0)
         cout << "No" << endl;
      else
         cout << "Yes" << endl;
   }
   return 0;
}