#include<bits/stdc++.h>
using namespace std;
struct stu{
    int l,r;
}p[10005];
int n;
bool cmp(stu a,stu b){
    return a.l*a.r<b.l*b.r;
}
int k,a[4005]={1},c[4005];

void mul(int x){
    for(int i=0;i<k;i++) a[i]*=x;
    int t=0;
    for(int i=0;i<k;i++){
        a[i]+=t;//累加进位值
        t=a[i]/10;//进位值
        a[i]%=10;//取余数
    }
    while(t){
        a[k++]=t%10;
        t/=10;
    }
}
void chu(int x){
    int t=0;//退位值
    for(int i=k-1;i>=0;i--){ //从最高位开始计算
    a[i]+=t*10;
    c[i]=a[i]/x;
    t=a[i]%x;//退位值
    } 
}
int main(){
    cin>>n;
    for(int i=0;i<=n;i++) cin>>p[i].l>>p[i].r;
    sort(p+1,p+n+1,cmp);
    for(int i=0;i<n;i++){
        mul(p[i].l);
    chu(p[n].r);
    }
    while(c[k-1]==0&&k>0) k--;//k-1
    if(k==0){
        cout<<1;
        return 0;
    }
    //遍历输出
    for(int i=k-1;i>=0;i--) cout<<c[i];
    return 0;
}
