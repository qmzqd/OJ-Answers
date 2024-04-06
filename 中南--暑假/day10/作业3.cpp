#include <iostream>
using namespace std;
int m,n;
int k=1,a[1005]={1},b[1005]={2},c[1005];
void dfs(){
    for(int i=3;i<=n-m;i++){
        int x=0;
        for(int j=0;j<k;j++){
            c[j]=a[j]+b[j]+x;
            x=c[j]/10;
            c[j]%=10;
        }
        if(x) c[k++]=x;//最高位进位
        for(int i=0;i<k;i++) a[i]=b[i];
        for(int i=0;i<k;i++) b[i]=c[i];
    }
}
int main() {
    cin>>m>>n;
    dfs();
    for(int i=k-1;i>=0;i--) cout<<c[i];
    return 0;
}