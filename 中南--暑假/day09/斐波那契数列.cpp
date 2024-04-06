#include<bits/stdc++.h>
using namespace std;
long long n,p[1000];
int fbi(int x){
    if(x==1) return 1;
    if(x==2) return 2;
    return fbi(x-1)+fbi(x-2);
}
int main(){
    cin>>n;
    cout<<fbi(n)<<endl;
    return 0;
}