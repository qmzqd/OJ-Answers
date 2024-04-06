#include<bits/stdc++.h>
using namespace std;
int k,cnt,L=1,R=100,mid;
int main(){
    cin>>k;
    while(mid!=k){
        cnt++;
        mid=(L+R)/2;
        if(mid>k){
            R=mid-1;
        }else{
            L=mid+1;
        }
    }
    cout<<cnt;
    return 0;
}
