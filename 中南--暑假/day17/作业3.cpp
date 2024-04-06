#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,m,a[N],B[N];
long long ans;
int find(int x){
    int L=0,R=n-1,mid,minn=1e7;
    while(L<=R){
        mid=L+(R-L)/2;
        if(x==a[mid]){
            return 0;
        }else if(x<a[mid]){
            R=mid-1;
        }else{
            L=mid+1;
            minn=min(minn,abs(x-a[mid]))
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);//学校分数排序
    for(int i=0;i<m;i++){
        cin>>b[i];
        ans+=find(b[i]);
    }

    return 0;
}