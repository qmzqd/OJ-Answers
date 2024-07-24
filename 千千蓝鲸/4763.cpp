#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)
string s;
int k;
int main()
{
    cin >> s >> k;
    while (k--)
    {
        _for(i, 0, s.length() - 1)
        {
            if (s[i] > s[i + 1])
            {
                s.erase(i, 1);
                break;
            }
        }
    }
    cout << stoi(s);
    return 0;
}
