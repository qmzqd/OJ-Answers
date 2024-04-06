#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
long long n,m,p[N],L,R,mid;    
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>p[i];
        R=max(R,p[i]);//最高树
    }
    while(L<=R){
        long long sum=0;
        mid=L+(R-L)/2;
        for(int i=0;i<n;i++){//遍历 树
            if(p[i]>mid) sum+=p[i]-mid;//累加木材
        if(sum<m) R=mid-1;
        else L=mid+1;
        }
    }
    cout<<R;
    return 0;
}