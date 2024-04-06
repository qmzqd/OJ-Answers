#include<bits/stdc++.h>
using namespace std;
struct stu{
    double m,v,avg;
}p[105];
int n,m;
double ans;
bool cmp(stu a,stu b){
    return a.avg>b.avg;
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>p[i].m>>p[i].v;
        p[i].avg=p[i].v/p[i].m;
    }
    sort(p,p+n,cmp);
    for(int i=0;i<n;i++){
        if(m>=p[i].m){
            ans+=p[i].v;
            m-=p[i].m;
        }else{
            ans+=p[i].avg*m;
            break;
        }
    }
    cout<<fixed<<setprecision(2)<<ans;
}