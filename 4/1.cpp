#include<bits/stdc++.h>
using namespace std;
int n,a[105]={1},b[105];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        int x=0;
        for(int j=0;j<100;j++){
            a[j]=a[j]*i+x;
            x=a[j]/10;
            a[j]%=10;
        }
        x=0;for(int j=0;j<100;j++){
            b[j]=a[j]+b[j]+x;
            x=b[j]/10;
            b[j]%=10;
        }
    }
    int len=100;
    while(b[len]==0&&len>0)len--;
    for(int i=len;i>=0;i--)cout<<b[i];
    return 0;
}