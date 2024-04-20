#include <bits/stdc++.h>   
using namespace std;  
string yuanshen(string dadaweadwarca){  
    string password="";  
    int n=dadaweadwarca.size();  
    for (int i=0;i<n/2;i++){  
        swap(dadaweadwarca[i],dadaweadwarca[n-i-1]);  
    }  
    for (int i=0;i<n/2;i++){  
        password+=dadaweadwarca[i];  
    }  
    return password;  
}  
int main(){  
    string dadaweadwarca;  
    cin>>dadaweadwarca;  
    cout<<yuanshen(dadaweadwarca);  
    return 0;  
}