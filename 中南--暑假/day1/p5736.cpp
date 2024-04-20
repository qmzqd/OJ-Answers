#include<bits/stdc++.h>  
using namespace std;  
  
bool isprime(int x){  
    if(x<2) return 0;  
    for(int i=2;i*i<=x;i++){ 
        if(x%i==0){  
            return 0;  
        }  
    }  
    return 1;  
}  
  
int main(){  
    int n;  
    cin>>n;  
    vector<int> a; 
    for(int i=1;i<=n;i++){  
        int x;  
        cin>>x;  
        if(isprime(x)) a.push_back(x); 
    }  
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";  
    return 0;  
}