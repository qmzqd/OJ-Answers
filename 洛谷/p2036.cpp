#include<bits/stdc++.h>
using namespace std;
int n,min_0=0x7fffffff,suan=1,ku=0;
bool book[11];
struct node
{
    int su,k;
}a[11];
void dfs(int d){
    if(d==n){
        return;
    }
    for(int i=1;i<=n;i++){
        if(book[i]==0){
            book[i]=1;
            suan*=a[i].su;
            ku+=a[i].k;
            dfs(d+1);
            book[i]=0;
            suan/=a[i].su;
            ku-=a[i].k;
        }
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].su>>a[i].k;
    }
        dfs(0);
        cout<<min_0<<endl;
        return 0;
}
