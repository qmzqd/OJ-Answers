#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int n,m,p[N],x;
int find(int x){//二分查找
    int L=1,R=n,mid;
    while(L<=R){
        mid=(R+L)/2;
        if(x>p[mid])L=mid+1;//x在mid右侧
        else R=mid-1;//x在mid左侧
    }
    if(p[L]==x) return L;
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
};
