#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005][1005],p[1005][1005];
int main(){
    cin>>n>>m;
    while(m--){
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        p[x1][y1]+=1;
        p[x1][y2+1]-=1;//消除右侧影响
        p[x2+1][y1]-=1;//消除下侧影响
        p[x2+1][y2+1]+=1;//消除 重复被消除的影响
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=p[i][j]+a[i-1][j]+a[i][j-1]-a[i-1][j-1];
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}