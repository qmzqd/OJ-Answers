#include <iostream>
using namespace std;

int func(int wobudaoa, int q)
{
    if (wobudaoa == 1 && q == 1)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    cin >> n;
    int pingzi = 0;
    for (int i = 0; i < n; i++)
    {
        int wobudaoa, q;
        cin >> wobudaoa >> q;
        pingzi += func(wobudaoa, q);
    }
    cout << pingzi << endl;
    return 0;
}