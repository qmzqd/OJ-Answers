#include<bits/stdc++.h>
using namespace std;
struct stu{
    int h,t;
}p[5005];
int n,m,a,b,ans;
bool cmp(stu a,stu b){
    return a.t<b.t;
}
int main(){
    cin>>n>>m;
    cin>>a>>b;
    for(int i=0;i<n;i++) cin>>p[i].h>>p[i].t;
    sort(p,p+n,cmp);
    for(int i=0;i<n;i++){
        if(m>=p[i].t){
            if(a+b>=p[i].h){
                ans++;
                m-=p[i].t;
            }
        }else
            break;
    }
    cout<<ans;
}