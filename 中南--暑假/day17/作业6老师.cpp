#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,m,p[N],L=1,R,mid;
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>p[i];
        R=max(R,p[i]);
    }
    while(L<=R){
        int cnt=0;
        mid=L+(R-L)/2;
        for(int i=0;i<n;i++){
            cnt+=p[i]/mid;
        }
        if(cnt<m) R=mid-1;
        else L=mid+1;//cnt==m 向右逼近
    }
    cout<<R;
    return 0;
}