#include <iostream>
#include <cmath>
using namespace std;
int n, w, x, t, line[605];
int main()
{
    cin >> n >> w;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        line[t]++;
        x = max(1, i * w / 100);
        for (int j = 600; j >= 0; j--)
        {
            x -= line[j];
            if (x <= 0)
            {
                cout << j << ' ';
                break;
            }
        }
    }
    return 0;
}
