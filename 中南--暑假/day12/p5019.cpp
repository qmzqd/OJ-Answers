#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,ans,p[N];
int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>p[i];
    for(int i=1;i<n;i++){
        if(p[i]>p[i-1]) ans+=p[i]-p[i-1];
    }
    cout<<ans+p[0];
    return 0;
}   