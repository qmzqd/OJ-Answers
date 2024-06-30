#include <bits/stdc++.h>   
using namespace std;  
string flag(string in){  
    string password="";  
    int n=in.size();  
    for (int i=0;i<n/2;i++){  
        swap(in[i],in[n-i-1]);  
    }  
    for (int i=0;i<n/2;i++){  
        password+=in[i];  
    }  
    return password;  
}  
int main(){  
    string in;  
    cin>>in;  
    cout<<flag(in);  
    return 0;  
}