#include<bits/stdc++.h>
using namespace std;
string a,b;
int main()
{
    getline(cin,a);
    getline(cin,b);
    if(a.size()!=b.size()){
        cout<<"no";
        return 0;
    }else{
        for(long long i=0;i<a.size();i++){
            if(char(a[i]-32)==char(b[i])||char(a[i])==char(b[i]-32)||char(a[i])==char(b[i]))continue;
            else{
                cout<<"no";
                return 0;
            }
        }
    }
    cout<<"yes";
    return 0; 
}