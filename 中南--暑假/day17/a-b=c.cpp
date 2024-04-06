#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,c,p[N],ans;
int main(){
    cin>>n>>c;
    for(int i=0;i<n;i++) cin>>p[i];
    sort(p,p+n);//升序
    int L=0,R=0;
    for(int i=0;i<n;i++){
        while(L<n&&p[L]<p[i]-c) L++;//第一个等于b=a-c的值位置
        while(R<n&&p[R]<=p[i]-c) R++;
        if(p[i]==p[L]+c) ans+=R-L;
    }
    cout<<ans;
    return 0;
}