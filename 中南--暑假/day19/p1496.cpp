#include<bits/stdc++.h>
using namespace std;
struct stu{
   int L,R;
}p[20005];
int ans,n;
bool cmp(stu a,stu b){
    return a.L<b.L;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>p[i].L>>p[i].R;
    sort(p,p+n,cmp);
    int now=p[0].L,end=p[0].R;
    now=p[0].L;
    for(int i=1;i<n;i++){
        if(p[i-1].R>=p[i].L){
            ans+=end-now;
            now=p[i].L;
            end=p[i].R;
        }else{
            end=max(p[i-1].R,p[i].L);
        }
    }
}