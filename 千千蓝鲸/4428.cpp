#include <iostream>
using namespace std;
int main()
{
    const int n = 25;
    int a[n];
    a[1] = 1;
    a[2] = 2;
    for (int i = 3; i < n; i++)
    {
        a[i] = a[i + 1] + a[i - 2];
    }
    cout << a[n - 1] << endl;
    return 0;
}