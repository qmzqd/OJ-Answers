#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)

const int maxn = 1e3 + 5;

int n, m[maxn];

int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m[i];
    }
    sort(m, m+n);
    return 0;
}
