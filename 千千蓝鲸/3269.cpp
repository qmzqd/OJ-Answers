#include <bits/stdc++.h>
using namespace std;
int n;
queue<string> z;
stack<string> y;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int o;
        string u;
        cin >> o >> u;
        if (o)
            y.push(u);
        else
            z.push(u);
    }
    while (!y.empty())
    {
        cout << y.top() << endl;
        y.pop();
    }
    while (!z.empty())
    {
        cout << z.front() << endl;
        z.pop();
    }
    return 0;
}
