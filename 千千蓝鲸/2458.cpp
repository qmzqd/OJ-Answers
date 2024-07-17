<<<<<<< HEAD
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
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s1, s2;
  getline(cin,s1);
  getline(cin,s2);
  
>>>>>>> 0d7f0c2097292e25d54a766d40f60b4dadaa8b6f
}