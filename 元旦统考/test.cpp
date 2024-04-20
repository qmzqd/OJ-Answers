#include <bits/stdc++.h>
using namespace std;
int a, b, c;
long long mysql[4] = {1, 2, 4, 7};
int main()
{
    cin >> a >> b >> c;
    for (int i = 0; i < 4; i++)
    {
        if (a == mysql[i])
        {
            a = 0;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (b == mysql[i])
        {
            b = 0;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (c == mysql[i])
        {
            c = 0;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (mysql[i] = a)
        {
            cout << a;
        }
        if (mysql[i] = b)
        {
            cout << b;
        }
        if (mysql[i] = c)
        {
            cout << c;
        }
    }
    return 0;
}