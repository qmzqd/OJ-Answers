#include <iostream>
#include <cmath>
using namespace std;
int n, d, v[100005], a[100005], min1;
long long ans, sum;
int main()
{
    cin >> n >> d;
    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    min1 = a[1];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min1)
            min1 = a[i];
        if (sum < v[i])
        {
            int add = ceil((v[i] - sum) * 1.0 / d);
            sum += add * d;
            ans += min1 * add;
        }
        sum -= v[i];
    }
    cout << ans;
    return 0;
}