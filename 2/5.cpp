#include<bits/stdc++.h>
using namespace std;
string s;
int a[30],max1,index1;
int main()
{
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        int b=s[i]-'a';
        a[b]++;
    }
    for(int i=0;i<26;i++){
        if(a[i]>max1){
            max1=a[i];
            index1=i;
        }
    }
    char c='a'+index1;
    cout<<c<<" "<<max1;
    return 0;
}
//§8[§c蠢人反作弊§8] §ca123213379 §2这个蠢人正在开 §cNoSlowA §2挂! (§c可信度:100%§2)