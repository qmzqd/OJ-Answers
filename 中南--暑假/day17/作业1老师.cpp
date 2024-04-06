#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int n,m,x,p[N];
int find(int x){
    int L=1,R=n,mid;
    while(L<=R){
        mid=L+(R-L)/2;//防止 超限
        if(x>=p[mid]) R=mid-1;//向左逼近
        else L=mid=1;
    }
    if(p[L]==x) return L;//找到了   
    else return -1;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    while(m--){
        cin>>x;
        cout<<find(x)<<" ";
    }
}