#include<bits/stdc++.h>
using namespace std;
int n,cnt;
int main(){
    cin>>n;
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            cout<<"N";
        }
        else cout<<"Y";
    }
    return 0;
}