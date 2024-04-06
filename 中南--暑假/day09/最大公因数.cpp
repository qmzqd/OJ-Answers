#include<bits/stdc++.h>
using namespace std;
int y,x;
int fbi(int x,int y){
    if(x>y)x/y%1==0; return y;
    return fbi(y,x%y);
}
int main(){
    int ans;
    cin>>x>>y;
    ans=fbi(x,y);
    cout<<ans<<endl;
    return 0;
}