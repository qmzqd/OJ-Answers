#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main()
{
    cin >> a >> b >> c;
    if (a == b || a == c || b == c)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
