#include <bits/stdc++.h>
using namespace std;
int in1, in2;
int main()
{
    cin >> in1 >> in2;
    if (in1 == 1 && in2 == 2)
        cout << "3";
    if (in1 == 2 && in2 == 1)
        cout << "3";
    if (in1 == 2 && in2 == 3)
        cout << "1";
    if (in1 == 3 && in2 == 2)
        cout << "1";
    if (in1 == 1 && in2 == 3)
        cout << "2";
    if (in1 == 3 && in2 == 1)
        cout << "2";
    return 0;
}
