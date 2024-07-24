#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)
int a, x;
char c;
bool f = 0;
void fun(int x) // 判断是否可以由x倒推到a
{
    if (x == a)
        f = 1;
    x--;
    if (x % 2 == 0)
        fun(x / 2);
    if (x % 3 == 0)
        fun(x / 3);
    return;
}
int main()
{
    while (cin >> a >> c >> x)
    {
        fun(x);
        if (f == 1)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
        f = 0;
    }
    return 0;
}
