#include <bits/stdc++.h>
using namespace std;
long long n = 0;
long long out = 0;
int main()
{
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      out += 1 + i;
   }
   cout << out << endl;
   return 0;
}