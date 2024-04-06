#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
struct stu{
    int l,r;
}p[N];
int n,ans;
bool cmp(stu a,stu b){
    return a.r<b.r;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>p[i].l>>p[i].r;
    sort(p,p+n,cmp);
    int now=p[0].r;
    ans=1;
    for(int i=1;i<n;i++){
        if(now<=p[i].l){
            ans++;
            now=p[i].r;
        }
    }
    cout<<ans;
    return 0;
}