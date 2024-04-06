#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int S,n,m,p[N];
bool find(int x){
    int cnt=0,len;
    for(int i=1;i<n;i++){//遍历所有路牌距离 
        len=p[i]-p[i-1];
        cnt+=len/x;
        if(cnt>=m) return 0;
    }
}
int main(){
    cin>>S>>n>>m;
    for(int i=0;i<n;i++) cin>>p[i];
    int L=1,R=S,mid;
    while(L<=R){
        mid=L+(R-L)/2;
        if(find(mid)) R=mid-1;
        else L=mid+1;
    }
    cout<<L;
    return 0;
}