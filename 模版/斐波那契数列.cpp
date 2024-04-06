#include<bits/stdc++.h>
using namespace std;
// 1 1 2 3 5 8
int n;
int fun(int x){
    if(x==1||x==2)return 1;
    else return fun(x-1)+fun(x-2);
};
int main(){
    cin>>n;
    cout<<fun(n);
}