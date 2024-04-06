#include<bits/stdc++.h>
using namespace std;
long long n,p[305],ans,k;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>p[i];
    int l=0,r=n;
    sort(p+1,p+n+1);
    while(l<r){
        ans+=(p[r]-p[l])*(p[r]-p[l]);
        if(k++%2==0){
            l++;//向右递进
        }else
            r--;//向左递进
    }
    cout<<ans;
    return 0;
}