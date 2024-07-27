#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)
struct info
{
    string name;
    int id;
} a[1005];
int n, m, k;
queue<info> q;
int main()
{
    cin >> n >> m;
    _for(i, 1, n)
    {
        cin >> a[i].name;
        a[i].id = i;
    }
    _for(i, 1, n) q.push(a[i]);
    while (!q.empty())
    {
        k++;
        info f = q.front();
        if (k % m == 0)
            cout << f.id << " " << f.name << endl;
        else
            q.push(f);
        q.pop();
    }
    return 0;
}
