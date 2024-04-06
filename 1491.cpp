#include<bits/stdc++.h>
using namespace std;
int f(int n,int x){
    if(n==0)return 1;
    else if(n==1)return 2*x;
    else return 2*x*f(n-1,x)-2*(n-1)*f(n-2,x);
}
int main(){
    int x,n;
    cin>>n>>x;
    cout<<f(n,x);
    return 0;
}