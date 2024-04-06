#include <bits/stdc++.h>
using namespace std;
int main(){
    double xa,ya,xb,yb;
    cin>>xa>>ya>>xb>>yb;
    double l=sqrt(pow(xb-xa,2)+pow(yb-ya,2));
    cout<<fixed<<setprecision(3)<<l<<endl;
    return 0;
}
//为什么要用勾股定理啊啊啊啊啊啊啊啊啊啊？？？