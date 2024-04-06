#include<bits/stdc++.h>
using namespace std;
int n,p[10005];
long long ans;
bool cmp(int a,int b){
    return a>b;//降序
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>p[i];
    sort(p,p+n,cmp);
    for(int i=n-2;i>=0;i--){
        p[i]+=p[i+1];
        ans+=p[i];
        for(int j=i;j>0;j--){
            if(p[j-1]<p[j])
                swap(p[j-1],p[j]);
            else break;
        }
    }
    cout<<ans;
    return 0;
}
