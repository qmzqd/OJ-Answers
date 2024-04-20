#include <iostream>
using namespace std;
const int maxn = 5005;
int guandeng[maxn + 1];
void findguandeng(int n, int m)
{
    for (int i = 1; i <= n; i++)
    {
        guandeng[i] = 1;
    }
    for (int i = 2; i <= m; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            guandeng[j] = 1 - guandeng[j];
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    findguandeng(n, m);
    bool f = true;
    for (int i = 1; i <= n; i++)
    {
        if (guandeng[i] == 0)
        {
            if (!f)
            {
                cout << ",";
            }
            cout << i;
            f = false;
        }
    }
    return 0;
}