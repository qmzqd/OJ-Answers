#include <iostream>
#include <algorithm>
using namespace std;

struct stu
{
    int south, north;
};
bool cmp(stu a, stu b)
{
    return a.south < b.south;
}
int main()
{
    int n;
    cin >> n;
    stu cities[200000];
    for (int i = 0; i < n; i++)
    {
        cin >> cities[i].south >> cities[i].north;
    }
    sort(cities, cities + n, cmp);
    int cnt = 0, max_north = 0;
    for (int i = 0; i < n; i++)
    {
        int south = cities[i].south;
        int north = cities[i].north;
        if (north > max_north)
        {
            cnt++;
            max_north = north;
        }
    }
    cout << cnt;
    return 0;
}
