#include <bits/stdc++.h>
using namespace std;
bool isa(int num)
{
    return (num >= 'A' && num <= 'Z');
}
int main()
{
    int N, b;
    cin >> N >> b;
    vector<int> flag(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> flag[i];
    }
    flag.erase(remove_if(flag.begin(), flag.end(), [b](int num)
                        { return num % b == 0; }),
              flag.end());
    sort(flag.begin(), flag.end());
    for (int i = 0; i < flag.size(); ++i)
    {
        if (isa(flag[i]))
        {
            cout << (char)flag[i] << " ";
        }
        else
        {
            cout << flag[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
