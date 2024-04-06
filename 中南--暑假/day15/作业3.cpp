#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,a[30],b[30][30],c[30]= {0},maxx=0,k=0,x=0,k2=0;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<n; i++)
        for(int j=1; j+i<=n; j++)
            cin>>b[i][j];
    for(int i=n-1; i>0; i--) {
        int f1=0;
        for(int j=1; j<=n-i; j++) {
            if(!b[i][j]) continue; 
            if(b[i][j])
                if(a[i+j]>x) k=i+j,x=a[i+j];
            a[i]+=x;
            if(a[i]>maxx) maxx=a[i],k2=i;
            c[i]=k;
        }
        if(f1==1) {

        }
    }
    cout<<k2<<' ';
    while(c[k2]) {
        cout<<c[k2]<<' ';
        k2=c[k2];
    }
    cout<<endl<<maxx;
    return 0;
}