#include<bits/stdc++.h>
using namespace std;
struct stu{
    int id,score;
}p[5005];
int n,k,cnt;
bool cmp(stu a,stu b){
    if(a.score==b.score)
    return a.id<b.id;
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>p[i].id>>p[i].score;
    }
    sort(p+1,p+n+1,cmp);
    k*+1.5;
    for(int i=1;i<=n;i++){
        if(p[i].score>=p[k].score){
            cnt++;
        }
    }
    cout<<p[k].score<<" "<<cnt<<endl;
    for(int i=1;i<=n;i++){
        if(p[i].score>=p[k].score)
            cout<<p[i].id<<" "<<p[i].score<<endl;
        else break;
    }
    return 0;
}