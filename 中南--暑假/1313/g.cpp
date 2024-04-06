#include<bits/stdc++.h>  
using namespace std;  
string nb(string str) {  
    string zifuchuan="";  
    int cnt=1;  
    for (int i=1;i<str.length();i++) {  
       if (str[i]==str[i-1]) {  
            cnt++;  
        } else {  
            zifuchuan+=to_string(cnt)+str[i-1];  
            cnt=1;  
        }  
    }  
    if (cnt>1) {  
        zifuchuan+=to_string(cnt);  
    }  
    return zifuchuan;  
}  
int main() {  
    string str;  
    cin>>str;  
    cout<<nb(str)<<endl;  
    return 0;  
}