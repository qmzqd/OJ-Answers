#include<bits/stdc++.h>
using namespace std;
struct stu{
    int id,x,y,z,tol;
}p[305];
int n;
bool cmp(stu a,stu b){
    if(a.tol==b.tol){
        if(a.x==b.x)
            return a.id<b.id;
        else return a.x>b.x;
    }
    return a.tol>b.tol;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i].x>>p[i].y>>p[i].z;
        p[i].tol+p[i].x+p[i].y+p[i].z;
        p[i].id=i+1;
    }
    sort(p,p+n,cmp);
    for(int i=0;i<5;i++) cout<<p[i].id<<" "<<p[i].tol<<endl;
    return 0;
}
