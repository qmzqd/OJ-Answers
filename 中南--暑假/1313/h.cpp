#include<bits/stdc++.h>  
using namespace std;  
bool shibushi(int n){  
    if(n <= 1)return false;  
    for(int i=2;i*i<=n;i++) {  
        if(n%i==0)return false;  
    }  
    return true;  
}  
int main(){  
    int n;  
    cin>>n;  
    for(int i=2;i*i<=n;i++) {  
        if(shibushi(i)&&shibushi(n/i)){  
            cout<<max(i,n/i)<<endl;
            return 0;  
        }  
    }  
}