#include <bits/stdc++.h>
using namespace std;
int m, d;
int main()
{
   cin >> m >> d;
   if (m < 10 && d < 10)
      cout << "0" << m << "-" << "0" << d << endl;
   else if (m < 10)
      cout << "0" << m << "-" << d << endl;
   else if (d < 10)
      cout << m << "-" << "0" << d << endl;
   else
      cout << m << "-" << d << endl;
   return 0;
}
