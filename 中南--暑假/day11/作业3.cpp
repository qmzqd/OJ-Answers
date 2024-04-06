#include<bits/stdc++.h>
using namespace std;
struct stu{
    int id,t;
}p[1005];
int n;
double ans;
bool cmp(stu a,stu b){
    return a.t<b.t;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>p[i].t;
        p[i].id=i;
    }
    sort(p+1,p+n+1,cmp);
    for(int i=1;i<=n;i++) cout<<p[i].id<<" ";
    cout<<endl;
    for(int i=1;i<=n;i++){
        ans+=p[i].t*(n-1);
    }
    cout<<fixed<<setprecision(2)<<ans/n;
}

