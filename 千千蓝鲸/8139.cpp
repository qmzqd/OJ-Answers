#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    getline(cin, n);
    for (size_t i = 0; i < n.length(); ++i)
    {
        if (isalpha(n[i]))
        {
            n[i] = tolower(n[i]);
        }
    }
    for (size_t i = 0; i < n.length(); ++i)
    {
        if (isdigit(n[i]))
        {
            n[i] = ' ';
        }
    }
    cout << n << endl;
    return 0;
}
