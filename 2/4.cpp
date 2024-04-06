#include<bits/stdc++.h>
using namespace std;
int a[11],b[11],k1,k2,x;
int main(){
    for(int i=1;i<=10;i++){
        cin>>x;
        if(x%2==1)a[++k1]=x;
        else b[++k2]=x;
    }
    sort(a+1,a+1+k1);
    sort(b+1,b+1+k2);
    for(int i=k1;i>=1;i--)cout<<a[i]<<" ";
    for(int i=1;i<=k2;i++)cout<<b[i]<<" ";
    return 0;
}