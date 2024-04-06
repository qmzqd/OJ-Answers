#include<bits/stdc++.h>
using namespace std;
double all,pay,m,ans,L=0,R=10,mid;
double find(double l,double r){             
}
int main(){
    cin>>all>>pay>>m;
    while(R-L>1e-5){
        double t=all;
        mid=(L+R)/2;
        for(int i=1;i<=m;i++){
            t=t*(1+t)-pay; 
        } 
        if(t>0){
            R=mid-0.0001;
        }else{
            L=mid+0.0001;
        }
    }
    cout<<fixed<<setprecision(1)<<L*100;
    return 0;
}