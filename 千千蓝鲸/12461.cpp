#include <iostream>
using namespace std;
int maxx(int a[], int size)
{
    int ms = -2147483648, flag = 0;
    for (int i = 0; i < size; i++)
    {
        flag = flag + a[i];
        if (ms < flag)
            ms = flag;
        if (flag < 0)
            flag = 0;
    }
    return ms;
}

int main()
{
    int n;
    cin >> n;
    int t[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> t[i];
    }
    int out = maxx(t, n);
    cout << out << endl;
    return 0;
}