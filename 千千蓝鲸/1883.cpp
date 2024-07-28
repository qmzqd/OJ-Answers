#include <iostream>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;
long long h, m, ax, bx, ay, by;
double dis = 0, t;
int main()
{
    cin >> ax >> ay;
    while (cin >> ax >> ay >> bx >> by)
        dis += 2 * sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
    t = dis / 1000 / 20;
    h = floor(t);
    m = round((t - h) * 60);
    cout << h << ':' << setw(2) << setfill('0') << m;
    return 0;
}
