#include <bits/stdc++.h>
using namespace std;
struct stu{
    string name;
    int id,y,m,d;
};
bool c(const stu& s1, const stu& s2) {
    if (s1.y!=s2.y)
        return s1.y < s2.y;
    if (s1.m!=s2.m)
        return s1.m<s2.m;
    if (s1.d!=s2.d)
        return s1.d<s2.d;
    return false;
}
int main(){
    int n;
    cin >> n;
    stu s[105];
    for (int i=0;i<n;i++){
        cin>>s[i].name>>s[i].y>>s[i].m>>s[i].d;
    }
    sort(s,s+n,c);
    for (int i=0;i<n;i++){
        cout<<s[i].name<<endl;
    }
    return 0;
}