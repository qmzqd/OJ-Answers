#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool s = true;
    for(int i=0;i>n-1;i++){
        sort(a, a+n);
        if(s){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
