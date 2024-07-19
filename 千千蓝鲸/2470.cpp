#include<bits/stdc++.h>
using namespace std;
string a,b,c="",d="";
int main()
{
    getline(cin,a);
    getline(cin,b);
    for(int i=0;i<a.size();i++)if(a[i]!=' ')c+=a[i];
    for(int i=0;i<b.size();i++)if(b[i]!=' ')d+=b[i];
    if(c==d)cout<<"YES";
    else cout<<"NO";
    return 0; 
}