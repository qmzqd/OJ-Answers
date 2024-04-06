#include <bits/stdc++.h>
using namespace std;
int n, elevator[105], minute = 0, cur = 1;
int main()
{
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      cin >> elevator[i];
   }
   for (int i = 0; i < n; i++)
   {
      if (elevator[i] > cur)
      {
         minute += (elevator[i] - cur) * 6 + 5;
      }
      else
      {
         minute += (cur - elevator[i]) * 4 + 5;
      }
      cur = elevator[i];
   }
   cout << minute << endl;
   return 0;
}