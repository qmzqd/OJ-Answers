#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,m,p[N],l,r;
long long sum[N];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>p[i];
        sum[i]=sum[i-1]+p[i];
    }
    cin>>m;
    while(m--){
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<endl;
    }
    return 0;
}