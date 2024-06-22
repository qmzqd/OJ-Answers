#include <bits/stdc++.h>
using namespace std;
int main()
{
    string l[4];
    int cnt[26] = {0};

    for (int i = 0; i < 4; i++)
    {
        getline(cin, l[i]);
        for (char c : l[i])
        {
            if (isupper(c))
            {
                cnt[c - 'A']++;
            }
        }
    }

    int maxcnt = *max_element(cnt, cnt + 26);

    for (int i = maxcnt; i > 0; i--)
    {
        for (int j = 0; j < 26; j++)
        {
            if (cnt[j] >= i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (char c = 'A'; c <= 'Z'; c++)
    {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}