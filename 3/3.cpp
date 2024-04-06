#include<bits/stdc++.h>
using namespace std;
int n,ans[101]={1};
int main(){
    cin>>n;
    while(n--){
        int x=0;
        for(int i=0;i<100;i++){
            ans[i]=ans[i]*2+x;
            x=ans[i]/10;
            ans[i]%=10;

        }}
        int len=100;
        while(ans[len]==0&&len>0)len--;
        for(int i=len;i>=0;i--)cout<<ans[i];
        return 0;
}