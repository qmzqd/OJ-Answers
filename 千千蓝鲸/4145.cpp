#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    s.push(a);
    s.push(b);
    s.push(c);
    s.push(d);
    s.push(e);
    for (int i = 3; i > 0; i--)
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    cout << s.top();
    return 0;
}