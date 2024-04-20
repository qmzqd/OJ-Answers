#include <bits/stdc++.h>
using namespace std;
int v,n,a[1145];
int main()
{
    cin>>v>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for (int i=n;i>0;i--)
        if (v>=a[i])
            v-=a[i];
    cout<<v;
    return 0;
}