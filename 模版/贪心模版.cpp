#include<bits/stdc++.h>
using namespace std;
int c,n,cnt,sum;
struct gudong{
    string name;
    double w;
}a[105];
bool cmp(gudong x,gudong y){
    return x.w<y.w;
};
int main(){
    cin>>c>>n;  
    for(int i=0;i<n;i++){  
        cin>>a[i].name>>a[i].w;  
        sort(a,a+n,cmp);
    }
        for(int i=0;i<n;i++){
            if(sum+a[i].w>c)break;
            else{
                sum+=a[i].w;
                cnt++;
            }
        }
    
    cout<<cnt;
    return 0;  
}