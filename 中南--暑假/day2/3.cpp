#include<bits/stdc++.h>
using namespace std;
int n,m;
struct info{
    int id,s;
}a[5141];
bool cmp(info x,info y){
    if(x.s==y.s)return x.id<y.id;
    return x.s>y.s;
};
//向下取整函数 floor()
//向上取整函数 ceil()
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i].id>>a[i].s;
    sort(a+1,a+1+n,cmp);
    int d=floor(m*1.5);
    while(a[d+1].s==a[d].s)d++;
    cout<<a[d].s<<" "<<d<<endl;
    for(int i=1;i<=d;i++)cout<<a[i].id<<" "<<a[i].s<<endl;
    return 0;
}