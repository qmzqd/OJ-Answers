#include<bits/stdc++.h>
using namespace std;
int n,m;
long long ans1,ans2;
int main(){
    cin>>n>>m;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==j)
                ans1+=(n-i)*(m-j);
            else
                ans2+=(n-i)*(m-j);
        }
    }
    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}