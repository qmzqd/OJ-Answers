#include <bits/stdc++.h>
using namespace std;
double a, b, c;
int main()
{
    cin >> a >> b >> c;
    float delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        if (x1 > x2)
        {
            swap(x1, x2);
        }
        printf("x1=%.5lf;x2=%.5lf", x1, x2);
    }
    else if (delta == 0)
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
    }
    else
    {
        cout << "端没鸡";
    }
    return 0;
}