#include<bits/stdc++.h>
using namespace std;
int n,h,p[20005],cnt,now;
bool cmp(int a,int b){
    return a>b;//降序
}
int main(){
    cin>>n>>h;
    for(int i=0;i<n;i++)cin>>p[i];
    sort(p,p+n,cmp);
    for(int i=0;i<n;i++){
        if(now<h){
            now+=p[i];
            cnt++;
        }else break;
    }
    cout<<cnt<<endl;
    return 0;
}
