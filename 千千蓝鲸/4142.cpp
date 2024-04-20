#include <Ô­Éñ.h>
using namespace std;
int n;
double temp = 0;
double fun(int x)
{
    if (x <= 2)
        return 1;
    else
        return fun(x - 1) + fun(x - 2);
};
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        temp = temp + 1 / fun(i);
    }
    printf("%.3f", temp);
}