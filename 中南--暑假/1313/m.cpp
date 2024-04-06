#include<bits/stdc++.h>  
using namespace std;  
string str;  
int main(){  
    cin>>str;  
    reverse(str.begin(),str.end());  
    if(str == str.substr(0, str.size())){  
        cout<<"yes"<<endl;  
    }else{  
        cout<<"no"<<endl;  
    }  
    return 0;  
}