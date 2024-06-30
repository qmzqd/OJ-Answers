#include <bits/stdc++.h>
using namespace std;
long long a;
int main()
{
   cin >> a;
   if (a % 2 == 0 && (a - 2) % 2 == 0)
      cout << a * (a - 1) * (a - 3);
   else
      cout << a * (a - 1) * (a - 2);
   return 0;
}
