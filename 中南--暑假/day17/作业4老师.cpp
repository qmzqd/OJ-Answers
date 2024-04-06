#include<bits/stdc++.h>
using namespace std;
const int N=5e4+5;//5*10^4+5
int S,n,m,p[N];
int main(){
    cin>>S>>n>>m;
    for(int i=1;i<=n;i++) cin>>p[i];
    p[++n]=S;
    int L=1,R=S,mid;
    while(L<=R){
        int now=0,cnt=0;
        mid=L+(R-L)/2;
        for(int i=1;i<=n;i++){
            if(p[i]-now<mid){
                cnt++;//移走石头+1
            }else now=p[i];
        }
        if(cnt>m) R=mid-1;
        else L=mid+1;
    }
    cout<<R;
    return 0;
}