#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)
int n, ans, start = 1;
struct info
{
    int id, price, t;
};
vector<info> q;
int main()
{
    cin >> n;
    _for(i, 1, n)
    {
        info a;
        cin >> a.id >> a.price >> a.t;
        if (a.id == 0)
            q.push_back(a);
        sum += a.price();
        else
        {
            while (!q.empty())
            {
                info f = q.front();
                if (a.t - f.t > 45)
                {
                    q.pop_front();
                }
                else
                {
                    if (f.price >= a.price)
                    {
                        q.pop_front();
                        break;
                    }
                    else
                    {
                        ans++;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
