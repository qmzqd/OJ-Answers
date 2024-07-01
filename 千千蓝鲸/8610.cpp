#include <bits/stdc++.h>
using namespace std;
int n = 0;
int main()
{
    cin >> n;
    if (n < 8)
        cout << "You are too young!";
    else if (n >= 8 && n <= 12)
        cout << "Welcome to Junior Class!";
    else if (n >= 13 && n <= 18)
        cout << "Welcome to Senior Class!";
    else if (n > 18)
        cout << "You are too old!";
    return 0;
}
