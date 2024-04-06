#include<bits/stdc++.h>
using namespace std;
int n;
int mul(int x){
    if(x==0||x==1) return 1;
    return mul(x-1)*x;//递推
}
int main(){
    cin>>n;
    cout<<mul(n);
}