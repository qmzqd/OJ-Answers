#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int taozi = 1;
    for (int i = n - 1; i > 0; i--)
    {
        taozi = (taozi + 1) * 2;
    }
    cout << taozi << endl;
    return 0;
}